package com.example.everton.apppharma;

import android.content.Intent;
import android.support.v7.app.AppCompatActivity;
import android.os.Bundle;
import android.view.View;
import android.widget.Button;
import android.widget.EditText;
import android.widget.Toast;

import java.sql.SQLException;

public class CadastrarMedicamento extends AppCompatActivity {

    EditText tvNomeMedicamento, tvPrecoMedicamento, tvDescricao;
    Button btnInserirMedicamento, btnVoltar;
    MedicamentoDAO fonteDeDados;

    @Override
    protected void onCreate(Bundle savedInstanceState) {
        super.onCreate(savedInstanceState);
        setContentView(R.layout.activity_cadastrar_medicamento);

        btnInserirMedicamento = findViewById(R.id.btnInserirMedicamento);
        tvNomeMedicamento = findViewById(R.id.etNomeMedicamento);
        tvPrecoMedicamento = findViewById(R.id.etTelefone);
        tvDescricao = findViewById(R.id.etDescricao);
        btnVoltar = findViewById(R.id.btnVoltar);
        fonteDeDados = new MedicamentoDAO(this);
        try {
            fonteDeDados.open();
        } catch (SQLException e) {
            e.printStackTrace();
        }

        btnInserirMedicamento.setOnClickListener(new View.OnClickListener() {
            @Override
            public void onClick(View view) {

                String nomeMedicamento = tvNomeMedicamento.getText().toString();
                String preco = tvPrecoMedicamento.getText().toString();
                String descricao = tvDescricao.getText().toString();

                if (nomeMedicamento.trim().isEmpty() || preco.trim().isEmpty() || descricao.trim().isEmpty()){
                    if (nomeMedicamento.trim().isEmpty())
                        tvNomeMedicamento.setError("Informe o nome do medicamento");
                    if (preco.trim().isEmpty())
                        tvPrecoMedicamento.setError("Informe o preco");
                    if (descricao.trim().isEmpty())
                        tvDescricao.setError("Informe a descricao");
                } else {
                    fonteDeDados.cadastraMedicamento(nomeMedicamento,
                            Float.parseFloat(preco), descricao);
                    Toast.makeText(CadastrarMedicamento.this,
                            "Medicamento inserido com sucesso", Toast.LENGTH_SHORT).show();
                    fonteDeDados.close();
                }
            }
        });

        btnVoltar.setOnClickListener(new View.OnClickListener() {

            @Override
            public void onClick(View view) {
                Intent intentTelaAnterior = new Intent(CadastrarMedicamento.this,Admim.class);
                startActivity(intentTelaAnterior);
                finish();
            }
        });
    }
}
