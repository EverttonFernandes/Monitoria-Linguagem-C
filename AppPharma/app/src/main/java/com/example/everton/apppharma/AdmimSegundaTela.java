package com.example.everton.apppharma;

import android.support.v7.app.AppCompatActivity;
import android.os.Bundle;
import android.view.View;
import android.widget.Button;
import android.widget.TextView;
import android.widget.Toast;

import java.sql.SQLException;

public class AdmimSegundaTela extends AppCompatActivity {

    private MedicamentoDAO fonteDeDados;
    TextView tvAlteraNome, tvAlteraPreco, tvAlteraDescricao;
    Button btnAtualizar, btnDeletar, btnAdmimSegundaTelaVoltar;
    Medicamento medicamento;
    @Override
    protected void onCreate(Bundle savedInstanceState) {
        super.onCreate(savedInstanceState);
        setContentView(R.layout.activity_admim_segunda_tela);
        fonteDeDados = new MedicamentoDAO(this);
        try {
            fonteDeDados.open();
        } catch (SQLException e) {
            e.printStackTrace();
        }

        tvAlteraNome = findViewById(R.id.tvAlteraNome);
        tvAlteraPreco = findViewById(R.id.tvAlteraPreco);
        tvAlteraDescricao = findViewById(R.id.etDescricao);
        btnAtualizar = findViewById(R.id.btnAtualizar);
        btnDeletar = findViewById(R.id.btnDeletar);
        btnAdmimSegundaTelaVoltar = findViewById(R.id.btnAdmimSegundaTelaVoltar);
        Bundle bundle = getIntent().getExtras();
        final long idCapturado = bundle.getLong("idMedicamento");

        medicamento = new Medicamento(idCapturado,bundle.getString("nomeMedicamento"),
                bundle.getFloat("preco"),
                bundle.getString("descricao"));

        tvAlteraNome.setText(medicamento.nomeMedicamento);
        String preco = String.valueOf(medicamento.preco);
        tvAlteraPreco.setText(preco);
        tvAlteraDescricao.setText(medicamento.descricao);

        btnDeletar.setOnClickListener(new View.OnClickListener() {
            @Override
            public void onClick(View v) {
                fonteDeDados.excluirMedicamento(idCapturado);
                Toast.makeText(AdmimSegundaTela.this,
                        "Contato excluído com sucesso",
                        Toast.LENGTH_SHORT).show();
                onBackPressed();
            }
        });

        btnAtualizar.setOnClickListener(new View.OnClickListener() {
            @Override
            public void onClick(View view) {
                medicamento.nomeMedicamento = String.valueOf(tvAlteraNome.getText());
                medicamento.preco = Float.parseFloat(tvAlteraPreco.getText().toString());
                medicamento.descricao = String.valueOf(tvAlteraDescricao.getText());
                fonteDeDados.atualizaMedicamento(medicamento);
                Toast.makeText(AdmimSegundaTela.this,
                        "Medicamento alterado com sucesso",
                        Toast.LENGTH_SHORT).show();
                fonteDeDados.close();
                onBackPressed();
            }
        });

        btnAdmimSegundaTelaVoltar.setOnClickListener(new View.OnClickListener() {
            @Override
            public void onClick(View view) {
                onBackPressed();
            }
        });
    }
}
