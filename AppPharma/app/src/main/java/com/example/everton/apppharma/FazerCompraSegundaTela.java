package com.example.everton.apppharma;

import android.content.Intent;
import android.support.v7.app.AppCompatActivity;
import android.os.Bundle;
import android.view.View;
import android.widget.Button;
import android.widget.TextView;
import android.widget.Toast;

import java.sql.SQLException;
import java.text.DecimalFormat;

public class FazerCompraSegundaTela extends AppCompatActivity {
    CompraDAO fonteDeDados;
    TextView tvNomePessoa, tvCpf, tvTelefone, tvEndereco, tvTotalCompra;
    Button btnFinalizarCompra, btnVoltarParaTelaDeCompra;


    @Override
    protected void onCreate(Bundle savedInstanceState) {
        super.onCreate(savedInstanceState);
        setContentView(R.layout.activity_fazer_compra_segunda_tela);

        fonteDeDados = new CompraDAO(this);
        try {
            fonteDeDados.open();
        } catch (SQLException e) {
            e.printStackTrace();
        }

        tvNomePessoa = findViewById(R.id.tvNomePessoa);
        tvCpf = findViewById(R.id.tvCpf);
        tvTelefone = findViewById(R.id.etTelefone);
        tvEndereco = findViewById(R.id.tvEndereco);
        tvTotalCompra = findViewById(R.id.tvTotalCompra);
        btnFinalizarCompra = findViewById(R.id.btnFinalizarCompra);
        btnVoltarParaTelaDeCompra = findViewById(R.id.btnVoltarParaTelaDeCompra);

        Bundle bundle = getIntent().getExtras();
        final float totalCompra = bundle.getFloat("total");
        DecimalFormat form = new DecimalFormat("0.00");
        tvTotalCompra.setText("Total gasto "+ form.format(totalCompra) + "R$");
        btnFinalizarCompra.setOnClickListener(new View.OnClickListener() {
            @Override
            public void onClick(View view) {
                String nomePessoa = tvNomePessoa.getText().toString();
                String cpf = tvCpf.getText().toString();
                String telefone = tvTelefone.getText().toString();
                String endereco = tvEndereco.getText().toString();
                String totalCompra = tvTotalCompra.getText().toString();

                if (nomePessoa.trim().isEmpty() || cpf.trim().isEmpty() ||
                        telefone.trim().isEmpty() || endereco.trim().isEmpty()){
                    if (nomePessoa.trim().isEmpty())
                        tvNomePessoa.setError("Informe o nome do comprador");
                    if (cpf.trim().isEmpty())
                        tvCpf.setError("Informe seu CPF");
                    if (telefone.trim().isEmpty())
                        tvTelefone.setError("Informe seu telefone");
                    if (telefone.trim().isEmpty())
                        tvEndereco.setError("Informe seu endereco");
                }
                else{
                    Intent intentFinalizarCompra = new Intent(FazerCompraSegundaTela.this,
                            TelaFinalDaCompra.class);
                    Compra compra = fonteDeDados.cadastraCompra(nomePessoa,cpf,
                            telefone,endereco,totalCompra);
                    Toast.makeText(FazerCompraSegundaTela.this,
                            "Compra finalizada", Toast.LENGTH_SHORT).show();
                    // criar um intent e passar os parametros para o bundle na tela final
                    Bundle parametros = new Bundle();

                    parametros.putString("nomePessoa",compra.nomePessoa);
                    parametros.putString("cpf",compra.cpf);
                    parametros.putString("telefone",compra.telefone);
                    parametros.putString("endereco",compra.endereco);
                    parametros.putString("totalCompra",compra.totalGasto);
                    intentFinalizarCompra.putExtras(parametros);
                    startActivity(intentFinalizarCompra);
                    fonteDeDados.close();
                }
            }
        });

        btnVoltarParaTelaDeCompra.setOnClickListener(new View.OnClickListener() {
            @Override
            public void onClick(View view) {
                Intent intentVoltarPraTelaDeCompras = new Intent(FazerCompraSegundaTela.this,
                        FazerCompra.class);
                startActivity(intentVoltarPraTelaDeCompras);
            }
        });
    }
}
