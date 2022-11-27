package com.example.myplaces;

import android.app.Activity;
import android.content.Intent;
import android.content.SharedPreferences;
import android.os.AsyncTask;
import android.os.Bundle;
import android.os.Handler;
import android.util.Log;
import android.view.View;
import android.widget.Button;
import android.widget.EditText;
import android.widget.TextView;
import android.widget.Toast;

import androidx.appcompat.app.AppCompatActivity;

import java.io.IOException;
import java.io.PrintWriter;
import java.net.Socket;

public class MainActivity extends AppCompatActivity {

    Button startbutton;
    Button endbutton;
    TextView ipshow;
    EditText ipinput;
    Button changebutton;
    Socket s;
    PrintWriter writer;
    TextView number;
    int i = 0;
    String mens;
    String ip;

    @Override
    protected void onCreate(Bundle savedInstanceState) {
        super.onCreate(savedInstanceState);
        setContentView(R.layout.activity_main);
        ip = "192.168.204.104";
        startbutton = (Button) findViewById(R.id.startbutton);
        endbutton = (Button) findViewById(R.id.endbutton);
        changebutton = (Button) findViewById(R.id.ipchangebutton);
        ipshow = (TextView) findViewById(R.id.currentip);
        ipinput =(EditText) findViewById(R.id.editip);
        ipshow.setText("Current ip: " + ip);
        number = (TextView) findViewById(R.id.number);

        onBtnClick();
    }

    @Override
    protected void onPause() { // Activity가 보이지 않을때 값을 저장한다.
        super.onPause();
        saveState();
    }

    @Override
    protected void onStart() {  // Activity가 보이기 시작할때 값을 저장한다.
        super.onStart();
        restoreState();
        if(ip != null)
            ipshow.setText("Current ip: " + ip);

    }

    protected void saveState(){ // 데이터를 저장한다.
        SharedPreferences pref = getSharedPreferences("pref", Activity.MODE_PRIVATE);
        SharedPreferences.Editor editor = pref.edit();
        editor.putString("text", ip);

        editor.commit();


    }
    protected void restoreState(){  // 데이터를 복구한다.
        SharedPreferences pref = getSharedPreferences("pref", Activity.MODE_PRIVATE);
        if((pref!=null) && (pref.contains("text"))){
            ip = pref.getString("text", "");
        }

    }

    public void onBtnClick() {

        startbutton.setOnClickListener(new View.OnClickListener(){
            @Override
            public void onClick(View view){
                StartBackGroundTask b2 = new StartBackGroundTask();
                b2.execute();
            }
        });

        endbutton.setOnClickListener(new View.OnClickListener(){
            @Override
            public void onClick(View view){
                EndBackGroundTask b3 = new EndBackGroundTask();
                b3.execute();
            }
        });

        changebutton.setOnClickListener(new View.OnClickListener(){
            @Override
            public void onClick(View view){
                ip = ipinput.getText().toString();
                ipshow.setText("Current ip: " + ip);

                if(s != null) {
                    try {
                        s.close();
                    } catch (IOException e) {
                        e.printStackTrace();
                    }
                }
                ipinput.setText("");
            }
        });
    }

    class BackGroundTask extends AsyncTask<String, Void, Void> {

        Handler h = new Handler();
        @Override
        protected Void doInBackground(String... voids) {
            try {
                mens = String.valueOf(i);

                if(s == null){
                    //change it to your IP
                    s = new Socket(ip,6000);
                    writer = new PrintWriter(s.getOutputStream());
                    Log.i("i", "CONNECTED");
                }
                writer.write(mens);
                writer.flush();
                //writer.close();
                i = i+1;
                h.post(new Runnable() {
                    @Override
                    public void run() {
                        number.setText(mens);
                    }
                });
            }
            catch (IOException e) {
                e.printStackTrace();
            }
            return null;
        }
    }

    class StartBackGroundTask extends AsyncTask<String, Void, Void> {

        Handler h = new Handler();
        @Override
        protected Void doInBackground(String... voids) {
            try {
                mens = "a";

                if(s == null){
                    //change it to your IP
                    s = new Socket(ip,6000);
                    writer = new PrintWriter(s.getOutputStream());
                    Log.i("i", "CONNECTED");
                }
                writer.write(mens);
                writer.flush();
                //writer.close();
                h.post(new Runnable() {
                    @Override
                    public void run() {
                        number.setText(mens);
                    }
                });
            }
            catch (IOException e) {
                e.printStackTrace();
            }
            return null;
        }
    }

    class EndBackGroundTask extends AsyncTask<String, Void, Void> {

        Handler h = new Handler();
        @Override
        protected Void doInBackground(String... voids) {
            try {
                mens = "B";

                if(s == null){
                    //change it to your IP
                    s = new Socket(ip,6000);
                    writer = new PrintWriter(s.getOutputStream());
                    Log.i("i", "CONNECTED");
                }
                writer.write(mens);
                writer.flush();
                //writer.close();
                h.post(new Runnable() {
                    @Override
                    public void run() {
                        number.setText(mens);
                    }
                });
            }
            catch (IOException e) {
                e.printStackTrace();
            }
            return null;
        }
    }
}
