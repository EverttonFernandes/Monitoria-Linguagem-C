package com.example.everton.apppharma;

import android.content.ContentValues;
import android.content.Context;
import android.database.Cursor;
import android.database.sqlite.SQLiteDatabase;

import java.sql.SQLException;
import java.util.ArrayList;
import java.util.List;

/**
 * Created by everton on 29/01/18.
 */

public class MedicamentoDAO {
    private SQLiteDatabase database;
    private MeuDBHelper dbHelper;
    private String[] todasColunas ={MeuDBHelper.COLUMN_IDMEDICAMENTO,
            MeuDBHelper.COLUMN_NOMEMEDICAMENTO,
            MeuDBHelper.COLUMN_PRECO,
            MeuDBHelper.COLUMN_DESCRICAO};

    public MedicamentoDAO(Context context){
        dbHelper = new MeuDBHelper(context);
    }

    public void open() throws SQLException {
        database = dbHelper.getWritableDatabase();
    }

    public void close(){
        dbHelper.close();
    }

    public void cadastraMedicamento(String nomeMedicamento, float preco, String descricao) {
        ContentValues values = new ContentValues();
        values.put(MeuDBHelper.COLUMN_NOMEMEDICAMENTO, nomeMedicamento);
        values.put(MeuDBHelper.COLUMN_PRECO, preco);
        values.put(MeuDBHelper.COLUMN_DESCRICAO, descricao);

       database.insert(MeuDBHelper.TABLE_MEDICAMENTO, null, values);
    }

    public List<Medicamento> pegarTodosMedicamentos(){
        List<Medicamento> medicamentos = new ArrayList<Medicamento>();
        Cursor cursor = database.query(MeuDBHelper.TABLE_MEDICAMENTO,
                todasColunas, null, null, null, null, null);
        cursor.moveToFirst();
        while (!cursor.isAfterLast()){
            Medicamento medicamento = cursor2Medicamento(cursor);
            medicamentos.add(medicamento);
            cursor.moveToNext();
        }
        cursor.close();
        return medicamentos;
    }

    public List<Medicamento> buscaMedicamento(String nomeMedicamento, Double preco, String descricao){
        String filtro;
        filtro = MeuDBHelper.COLUMN_NOMEMEDICAMENTO + " like '%" + nomeMedicamento + "%' AND " +
                MeuDBHelper.COLUMN_PRECO + " like '%" + preco + "%' AND " +
                MeuDBHelper.COLUMN_DESCRICAO + " like '%" + descricao + "%'";

        List<Medicamento> medicamentos = new ArrayList<Medicamento>();

        Cursor cursor = database.query(MeuDBHelper.TABLE_MEDICAMENTO, todasColunas, filtro,
                null, null, null, null);
        cursor.moveToFirst();
        while (!cursor.isAfterLast()){
            Medicamento medicamento = cursor2Medicamento(cursor);
            medicamentos.add(medicamento);
            cursor.moveToNext();
        }

        cursor.close();
        return medicamentos;
    }

    public void excluirMedicamento(long idCapturado){
        long idDoMedicamentoCapturado = idCapturado;
        database.delete(MeuDBHelper.TABLE_MEDICAMENTO,
                MeuDBHelper.COLUMN_IDMEDICAMENTO + " = " + idDoMedicamentoCapturado,
                null);
    }

    public void atualizaMedicamento(Medicamento medicamento){
        ContentValues values = new ContentValues();
        long idMedicamento = medicamento.idMedicamento;
        String nomeMedicamento = medicamento.nomeMedicamento;
        float preco = medicamento.preco;
        String descricao = medicamento.descricao;
        values.put(MeuDBHelper.COLUMN_NOMEMEDICAMENTO, nomeMedicamento);
        values.put(MeuDBHelper.COLUMN_PRECO, preco);
        values.put(MeuDBHelper.COLUMN_DESCRICAO, descricao);
        database.update(MeuDBHelper.TABLE_MEDICAMENTO, values,
                MeuDBHelper.COLUMN_IDMEDICAMENTO + " = " + idMedicamento, null);
    }

    private Medicamento cursor2Medicamento(Cursor cursor) {
        int colunaIdMedicamento = cursor.getColumnIndex(MeuDBHelper.COLUMN_IDMEDICAMENTO);
        int colunaNomeMedicamento = cursor.getColumnIndex(MeuDBHelper.COLUMN_NOMEMEDICAMENTO);
        int colunaPreco = cursor.getColumnIndex(MeuDBHelper.COLUMN_PRECO);
        int colunaDescricao = cursor.getColumnIndex(MeuDBHelper.COLUMN_DESCRICAO);
        return new Medicamento (cursor.getLong(colunaIdMedicamento),
                cursor.getString(colunaNomeMedicamento),
                cursor.getFloat(colunaPreco),
                cursor.getString(colunaDescricao));
    }
}
