package com.example.everton.apppharma;

/**
 * Created by everton on 27/01/18.
 */

public class Compra {
    long idCompra;
    String nomePessoa;
    String cpf;
    String telefone;
    String endereco;
    String totalGasto;

    public Compra(long idCompra, String nomePessoa,
                  String cpf, String telefone, String endereco, String totalGasto) {
        this.idCompra = idCompra;
        this.nomePessoa = nomePessoa;
        this.cpf = cpf;
        this.telefone = telefone;
        this.endereco = endereco;
        this.totalGasto = totalGasto;
    }
}
