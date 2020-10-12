package com.example.japarestaurante;

import androidx.appcompat.app.AppCompatActivity;

import android.content.Intent;
import android.os.Bundle;
import android.view.View;
import android.widget.EditText;

public class CriarEmail extends AppCompatActivity {

    @Override
    protected void onCreate(Bundle savedInstanceState) {
        super.onCreate(savedInstanceState);
        setContentView(R.layout.activity_criar_email);
    }
    public void onClickEnviar(View view){

        EditText editProduto = (EditText) findViewById(R.id.edtProduto);
        EditText editQtd = (EditText) findViewById(R.id.edtQtd);

        String produto = editProduto.getText().toString();
        String qtd = editQtd.getText().toString();

        String mensagem = "SOLICITAÇÃO DE ESTOQUE \nProduto: " + produto + " \nQuantidade: " + qtd;


        Intent intencao = new Intent(Intent.ACTION_SEND);

        intencao.setType("text/plain");

        intencao.putExtra(Intent.EXTRA_TEXT, mensagem);

        intencao.putExtra(Intent.EXTRA_SUBJECT, "Fornecedor");

        Intent shareIntent = Intent.createChooser(intencao, null);

        startActivity(shareIntent);

    }
}