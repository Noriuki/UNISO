package com.example.japarestaurante;

import androidx.appcompat.app.AppCompatActivity;

import android.content.Intent;
import android.os.Bundle;
import android.view.View;
import android.widget.TextView;

public class MainActivity extends AppCompatActivity {

    @Override
    protected void onCreate(Bundle savedInstanceState) {
        super.onCreate(savedInstanceState);

        setContentView(R.layout.activity_main);
    }

    public void fazerPedido (View view){
        Intent intentMandarPedido = new Intent(getApplicationContext(), MandarPedido.class);
        startActivity(intentMandarPedido);
    }

    public void mostrarHoras (View view){
        TextView horasString = findViewById(R.id.txt_horas);

        if(horasString.getText().toString().isEmpty()){
            horasString.setText("Total de Horas");
        } else {
            horasString.setText("");
        }
    }

}