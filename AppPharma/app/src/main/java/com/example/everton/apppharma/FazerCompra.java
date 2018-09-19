package com.example.everton.apppharma;

import android.content.Intent;
import android.support.v7.app.AppCompatActivity;
import android.os.Bundle;
import android.view.View;
import android.widget.Button;
import android.widget.ListView;

import java.sql.SQLException;
import java.util.List;

public class FazerCompra extends AppCompatActivity {

    ListView listaParaCompras;
    Button btnComprarMedicamento, btnVoltarPaciente;
    List<Medicamento> valuesCompra;
    AdaptadorCompra adaptadorCompra;
    MedicamentoDAO fonteDeDados;

    private void atualizaLista(){
        valuesCompra = fonteDeDados.pegarTodosMedicamentos();
        adaptadorCompra = new AdaptadorCompra(this,
                R.layout.item_lista_medicamento, valuesCompra);
        listaParaCompras.setAdapter(adaptadorCompra);
    }

    @Override
    protected void onCreate(Bundle savedInstanceState) {
        super.onCreate(savedInstanceState);
        setContentView(R.layout.activity_comprar);
        fonteDeDados = new MedicamentoDAO(this);
        try {
            fonteDeDados.open();
        } catch (SQLException e) {
            e.printStackTrace();
        }

        listaParaCompras = findViewById(R.id.listaParaCompras);
        btnComprarMedicamento = findViewById(R.id.btnComprarMedicamento);
        btnVoltarPaciente = findViewById(R.id.btnVoltarPaciente);
        atualizaLista();


        btnComprarMedicamento.setOnClickListener(new View.OnClickListener() {
            @Override
            public void onClick(View view) {
                Intent intentComprar = new Intent(FazerCompra.this,
                        FazerCompraSegundaTela.class);
                float totalDaCompra = 0;
                for (Medicamento m: valuesCompra){
                    if (m.selecionado){
                        totalDaCompra += m.preco;
                    }
                }
                Bundle parametros = new Bundle();
                parametros.putFloat("total",totalDaCompra);
                intentComprar.putExtras(parametros);
                startActivity(intentComprar);
            }
        });

        btnVoltarPaciente.setOnClickListener(new View.OnClickListener() {
            @Override
            public void onClick(View view) {
                onBackPressed();
            }
        });

    }
}