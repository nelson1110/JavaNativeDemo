package com.nelson.javanativedemo

import androidx.appcompat.app.AppCompatActivity
import android.os.Bundle
import android.widget.Toast
import kotlinx.android.synthetic.main.activity_main.*

class MainActivity : AppCompatActivity() {




    override fun onCreate(savedInstanceState: Bundle?) {
        super.onCreate(savedInstanceState)
        setContentView(R.layout.activity_main)

        doNative1.setOnClickListener {
            Toast.makeText(this@MainActivity,Brage.doInNative().toString(),Toast.LENGTH_SHORT).show()
        }

        doJava.setOnClickListener {
            Brage.callbackJava(this@MainActivity)
        }

    }
}
