package com.example.everton.apppharma;

import android.content.Intent;
import android.support.v7.app.AppCompatActivity;
import android.os.Bundle;
import android.view.View;
import android.widget.Button;
import android.widget.TextView;

import java.sql.SQLException;
import java.text.DecimalFormat;

public class TelaFinalDaCompra extends AppCompatActivity {
    // abrir o banco e mostrar na tela os dados do paciente/usuario/vulgoPessoa
    TextView tvTotalGastoFinal, tvNomeFinal, tvEnderecoFinal, tvCpfFinal, tvTelefoneFinal;
    Button btnVoltarProInicio;
    CompraDAO fonteDeDados;
    @Override
    protected void onCreate(Bundle savedInstanceState) {
        super.onCreate(savedInstanceState);
        setContentView(R.layout.activity_tela_final_da_compra);

        fonteDeDados = new CompraDAO(this);
        try {
            fonteDeDados.open();
        } catch (SQLException e) {
            e.printStackTrace();
        }

        tvTotalGastoFinal = findViewById(R.id.tvTotalGastoFinal);
        tvNomeFinal = findViewById(R.id.tvNomeFinal);
        tvEnderecoFinal = findViewById(R.id.tvEnderecoFinal);
        tvCpfFinal = findViewById(R.id.tvCpfFinal);
        tvTelefoneFinal = findViewById(R.id.tvTelefoneFinal);
        btnVoltarProInicio = findViewById(R.id.btnVoltarProInicio);

        Bundle bundle = getIntent().getExtras();
        String nomeFinal = bundle.getString("nomePessoa");
        String cpfFinal = bundle.getString("cpf");
        String telefoneFinal = bundle.getString("telefone");
        String enderecoFinal = bundle.getString("endereco");
        String total = bundle.getString("totalCompra");

        tvTotalGastoFinal.setText(total);
        tvNomeFinal.setText("Nome do paciente: "+nomeFinal);
        tvEnderecoFinal.setText("Será entregue no devido endereço: "+ enderecoFinal);
        tvCpfFinal.setText("CPF do paciente: " + cpfFinal);
        tvTelefoneFinal.setText("Telefone paciente: "+ telefoneFinal);


        btnVoltarProInicio.setOnClickListener(new View.OnClickListener() {
            @Override
            public void onClick(View view) {
                Intent intentVoltarProInicio = new Intent(TelaFinalDaCompra.this,
                        TelaInicial.class);
                startActivity(intentVoltarProInicio);
                finish();
            }
        });
    }
}
