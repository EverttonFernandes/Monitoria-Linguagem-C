package com.example.everton.apppharma;

import android.content.Intent;
import android.support.v7.app.AppCompatActivity;
import android.os.Bundle;
import android.view.View;
import android.widget.AdapterView;
import android.widget.Button;
import android.widget.ListView;

import java.sql.SQLException;
import java.util.List;

public class Admim extends AppCompatActivity {

    ListView listaMedicamentos;
    List<Medicamento> values;
    Button btnVoltar, btnCadastrar;
    Adaptador adaptador;
    MedicamentoDAO fonteDeDados;

    private void atualizaLista(){
        values = fonteDeDados.pegarTodosMedicamentos();
        adaptador = new Adaptador(this, R.layout.item_lista_medicamento, values);
        listaMedicamentos.setAdapter(adaptador);
    }

    @Override
    protected void onResume(){
        try {
            fonteDeDados.open();
        } catch (SQLException e) {
            e.printStackTrace();
        }
        atualizaLista();
        super.onResume();
    }

    @Override
    protected void onCreate(Bundle savedInstanceState) {
        super.onCreate(savedInstanceState);
        setContentView(R.layout.activity_admim);

        fonteDeDados = new MedicamentoDAO(this);
        try {
            fonteDeDados.open();
        } catch (SQLException e) {
            e.printStackTrace();
        }

        listaMedicamentos = findViewById(R.id.listaParaCompras);
        btnCadastrar = findViewById(R.id.btnCadastrar);
        btnVoltar = findViewById(R.id.btnVoltarTelaInicial);
        atualizaLista();
        listaMedicamentos.setOnItemClickListener(new AdapterView.OnItemClickListener() {
            @Override
            public void onItemClick(AdapterView<?> parent, View view, int position, long id) {
                Intent intent = new Intent(Admim.this, AdmimSegundaTela.class);
                Bundle parametros = new Bundle();
                Medicamento medicamento = values.get(position);
                parametros.putLong("idMedicamento",medicamento.idMedicamento);
                parametros.putString("nomeMedicamento", medicamento.nomeMedicamento);
                parametros.putDouble("preco", medicamento.preco);
                parametros.putString("descricao", medicamento.descricao);
                intent.putExtras(parametros);
                startActivity(intent);
            }
        });

        btnCadastrar.setOnClickListener(new View.OnClickListener() {
            @Override
            public void onClick(View view) {
                Intent intentCadastrarMedicamento = new Intent(Admim.this,
                        CadastrarMedicamento.class);
                startActivity(intentCadastrarMedicamento);
            }
        });

        btnVoltar.setOnClickListener(new View.OnClickListener() {
            @Override
            public void onClick(View view) {
                onBackPressed();
            }
        });
    }
}
