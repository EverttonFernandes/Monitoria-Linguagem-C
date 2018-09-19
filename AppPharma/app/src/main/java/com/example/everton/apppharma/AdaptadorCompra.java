package com.example.everton.apppharma;

import android.content.Context;
import android.view.View;
import android.view.ViewGroup;
import android.widget.CheckBox;
import android.widget.CompoundButton;

import java.util.List;

/**
 * Created by everton on 30/01/18.
 */

public class AdaptadorCompra extends Adaptador {

    public AdaptadorCompra(Context context, int resource, List<Medicamento> objects) {
        super(context, resource, objects);
    }

    @Override
    public View getView(int position, View convertView, ViewGroup parent) {
        final Medicamento medicamento = getItem(position);
        convertView = super.getView(position, convertView, parent);
        CheckBox checkBox = convertView.findViewById(R.id.checkCompra);
        checkBox.setChecked(medicamento.selecionado);
        checkBox.setVisibility(View.VISIBLE);
        checkBox.setOnCheckedChangeListener(new CompoundButton.OnCheckedChangeListener() {
            @Override
            public void onCheckedChanged(CompoundButton compoundButton, boolean checado) {
                medicamento.selecionado = checado;
            }
        });
        return convertView;
    }
}
