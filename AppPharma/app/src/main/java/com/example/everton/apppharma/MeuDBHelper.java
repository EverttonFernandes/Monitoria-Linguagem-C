package com.example.everton.apppharma;

import android.content.Context;
import android.database.sqlite.SQLiteDatabase;
import android.database.sqlite.SQLiteOpenHelper;

/**
 * Created by everton on 29/01/18.
 */

public class MeuDBHelper extends SQLiteOpenHelper {
    public static final String TABLE_MEDICAMENTO = "medicamentos";
    public static final String COLUMN_IDMEDICAMENTO = "idMedicamento";
    public static final String COLUMN_NOMEMEDICAMENTO = "nomeMedicamento";
    public static final String COLUMN_PRECO = "preco";
    public static final String COLUMN_DESCRICAO = "descricao";

    public static final String DATABASE_NAME = "arquivodobanco.bd";
    public static final int DATABASE_VERSION = 5;
    public static final String DATABASE_CREATE_TABLE_MEDICAMENTO = "create table "
            + TABLE_MEDICAMENTO + "("
            + COLUMN_IDMEDICAMENTO + " integer primary key autoincrement,  "
            + COLUMN_NOMEMEDICAMENTO + " text not null, "
            + COLUMN_PRECO + " float not null, "
            + COLUMN_DESCRICAO + " text not null);";

    public static final String TABLE_COMPRA = "compra";
    public static final String COLUMN_IDCOMPRA = "idCompra";
    public static final String COLUMN_NOMEPESSOA = "nomeCompra";
    public static final String COLUMN_CPF = "cpf";
    public static final String COLUMN_TELEFONE = "telefone";
    public static final String COLUMN_ENDERECO = "endereco";
    public static final String COLUMN_TOTALGASTO = "totalGasto";

    public static final String DATABASE_CREATE_TABLE_COMPRA = "create table "
            + TABLE_COMPRA + "("
            + COLUMN_IDCOMPRA + " integer primary key autoincrement,  "
            + COLUMN_NOMEPESSOA + " text not null, "
            + COLUMN_CPF + " text not null, "
            + COLUMN_TELEFONE + " text not null,"
            + COLUMN_ENDERECO + " text not null,"
            + COLUMN_TOTALGASTO + " text not null);";

    //MEDICAMENTO
    public MeuDBHelper(Context context) {
        super(context, DATABASE_NAME, null, DATABASE_VERSION);
    }

    @Override
    public void onCreate(SQLiteDatabase db) {
        db.execSQL(DATABASE_CREATE_TABLE_MEDICAMENTO);
        db.execSQL(DATABASE_CREATE_TABLE_COMPRA);
    }

    @Override
    public void onUpgrade(SQLiteDatabase db, int oldVersion, int newVersion) {
        db.execSQL("DROP TABLE IF EXISTS " + TABLE_MEDICAMENTO);
        db.execSQL("DROP TABLE IF EXISTS " + TABLE_COMPRA);
        onCreate(db);
    }
}
