package com.example.everton.apppharma;

import android.content.Context;
import android.view.LayoutInflater;
import android.view.View;
import android.view.ViewGroup;
import android.widget.ArrayAdapter;
import android.widget.TextView;

import java.util.List;

/**
 * Created by everton on 30/01/18.
 */

public class Adaptador extends ArrayAdapter<Medicamento> {
    private int resourceId;
    private LayoutInflater inflater;

    public Adaptador(Context context, int resource, List<Medicamento> objects) {
        super(context, resource, objects);
        this.resourceId = resource;
        this.inflater = LayoutInflater.from(context);
    }

    @Override
    public View getView(int position, View convertView, ViewGroup parent) {
        Medicamento medicamento = getItem(position);
        convertView = inflater.inflate(resourceId, null);
        TextView tvNomeMedicamento = (TextView) convertView.findViewById(R.id.etNomeMedicamento);
        TextView tvPreco = (TextView) convertView.findViewById(R.id.etTelefone);
        TextView tvDescricao = (TextView) convertView.findViewById(R.id.tvDesc);
        tvNomeMedicamento.setText(medicamento.nomeMedicamento);
        String preco = String.valueOf(medicamento.preco);
        tvPreco.setText("Preço "+ preco + "R$");
        tvDescricao.setText(medicamento.descricao);
        return convertView;
    }
}
