package com.example.everton.apppharma;

/**
 * Created by everton on 27/01/18.
 */

public class Medicamento {
    long idMedicamento;
    String nomeMedicamento;
    float preco;
    String descricao;
    boolean selecionado;

    public Medicamento(long idMedicamento, String nomeMedicamento,
                       float preco, String descricao) {
        this.idMedicamento = idMedicamento;
        this.nomeMedicamento = nomeMedicamento;
        this.preco = preco;
        this.descricao = descricao;
    }
}
