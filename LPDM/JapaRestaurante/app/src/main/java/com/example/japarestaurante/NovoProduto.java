package com.example.japarestaurante;

import androidx.appcompat.app.AppCompatActivity;

import android.content.Intent;
import android.os.Bundle;
import android.view.View;

public class NovoProduto extends AppCompatActivity {

    @Override
    protected void onCreate(Bundle savedInstanceState) {
        super.onCreate(savedInstanceState);
        setContentView(R.layout.activity_novo_produto);
    }


    public void onClickSalvar(View view){

        Intent intencao = new Intent(this, ExibirProduto.class);

        startActivity(intencao);
    }
}