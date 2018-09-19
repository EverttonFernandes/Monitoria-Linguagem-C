package com.example.everton.apppharma;

import android.content.Intent;
import android.graphics.Color;
import android.support.v7.app.AppCompatActivity;
import android.os.Bundle;
import android.view.View;
import android.widget.Button;
import android.widget.TextView;

public class TelaInicial extends AppCompatActivity {
    TextView tvTituto;
    Button btnAdmim, btnPaciente;
    @Override
    protected void onCreate(Bundle savedInstanceState) {
        super.onCreate(savedInstanceState);
        setContentView(R.layout.activity_tela_inicial);

        tvTituto = findViewById(R.id.tvTitulo);
        btnPaciente = findViewById(R.id.btnPaciente);
        btnAdmim = findViewById(R.id.btnAdmim);

        tvTituto.setBackgroundColor(Color.YELLOW);

        btnAdmim.setOnClickListener(new View.OnClickListener() {
            @Override
            public void onClick(View view) {
                Intent intentAdmim = new Intent(TelaInicial.this,Admim.class);
                startActivity(intentAdmim);
            }
        });

        btnPaciente.setOnClickListener(new View.OnClickListener() {
            @Override
            public void onClick(View view) {
                Intent intentPaciente = new Intent(TelaInicial.this,FazerCompra.class);
                startActivity(intentPaciente);
            }
        });
    }
}
