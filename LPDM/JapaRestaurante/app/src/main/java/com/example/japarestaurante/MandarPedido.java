package com.example.japarestaurante;

import androidx.appcompat.app.AppCompatActivity;

import android.content.Intent;
import android.os.Bundle;
import android.view.View;
import android.widget.Button;
import android.widget.EditText;

public class MandarPedido extends AppCompatActivity {

    @Override
    protected void onCreate(Bundle savedInstanceState) {
        super.onCreate(savedInstanceState);
        setContentView(R.layout.activity_mandar_pedido);


        Button btn_send_pedido =(Button)findViewById(R.id.btn_send_pedido);
        btn_send_pedido.setOnClickListener( new View.OnClickListener() {

            @Override
            public void onClick(View v) {
                /*Create an ACTION_SEND Intent*/
                Intent send_pedido = new Intent(android.content.Intent.ACTION_SEND);

                EditText input_pedido = (EditText) findViewById(R.id.input_pedido);
                String txt_pedido = (String) input_pedido.getText().toString();

                send_pedido.setType("text/plain");
                send_pedido.putExtra(android.content.Intent.EXTRA_TEXT, txt_pedido);

                startActivity(Intent.createChooser(send_pedido, "Enviar"));
            }
        });

    }
}