package com.example.everton.apppharma;

import android.content.ContentValues;
import android.content.Context;
import android.database.Cursor;
import android.database.sqlite.SQLiteDatabase;

import java.sql.SQLException;

/**
 * Created by everton on 29/01/18.
 */

public class CompraDAO {
    private SQLiteDatabase database;
    private MeuDBHelper dbHelper;
    private String[] todasColunas ={MeuDBHelper.COLUMN_IDCOMPRA,
            MeuDBHelper.COLUMN_NOMEPESSOA,
            MeuDBHelper.COLUMN_CPF,
            MeuDBHelper.COLUMN_TELEFONE,
            MeuDBHelper.COLUMN_ENDERECO,
            MeuDBHelper.COLUMN_TOTALGASTO};

    public CompraDAO(Context context){
        dbHelper = new MeuDBHelper(context);
    }

    public void open() throws SQLException {
        database = dbHelper.getWritableDatabase();
    }

    public void close(){
        dbHelper.close();
    }

    public Compra cadastraCompra(String nomePessoa,
                                 String cpf,
                                 String telefone,
                                 String endereco,
                                 String totalGasto) {
        ContentValues values = new ContentValues();
        values.put(MeuDBHelper.COLUMN_NOMEPESSOA, nomePessoa);
        values.put(MeuDBHelper.COLUMN_CPF, cpf);
        values.put(MeuDBHelper.COLUMN_TELEFONE, telefone);
        values.put(MeuDBHelper.COLUMN_ENDERECO, endereco);
        values.put(MeuDBHelper.COLUMN_TOTALGASTO, totalGasto);

        long insertId = database.insert(MeuDBHelper.TABLE_COMPRA, null, values);

        Cursor cursor = database.query(MeuDBHelper.TABLE_COMPRA, todasColunas,
                MeuDBHelper.COLUMN_IDCOMPRA + " = " + insertId,
                null, null, null, null);

        cursor.moveToFirst();
        Compra novaCompra = cursor2Contato(cursor);
        cursor.close();
        return novaCompra;
    }

    private Compra cursor2Contato(Cursor cursor) {
        int colunaIdCompra = cursor.getColumnIndex(MeuDBHelper.COLUMN_IDCOMPRA);
        int colunaNomeCompra = cursor.getColumnIndex(MeuDBHelper.COLUMN_NOMEPESSOA);
        int colunaCpf = cursor.getColumnIndex(MeuDBHelper.COLUMN_CPF);
        int colunaTelefone = cursor.getColumnIndex(MeuDBHelper.COLUMN_TELEFONE);
        int colunaEndereco = cursor.getColumnIndex(MeuDBHelper.COLUMN_ENDERECO);
        int colunaTotalGasto = cursor.getColumnIndex(MeuDBHelper.COLUMN_TOTALGASTO);
        return new Compra(cursor.getLong(colunaIdCompra),
                cursor.getString(colunaNomeCompra),
                cursor.getString(colunaCpf),
                cursor.getString(colunaTelefone),
                cursor.getString(colunaEndereco),
                cursor.getString(colunaTotalGasto));
    }
}
