/*
 * C.A.R. Projesinin Ana Hareket Scripti.
 */




const int in1=11;
const int in2=10;
const int in3=9;
const int in4=8;
const int e1=5;
const int e2=6; // Değişkenler Tanımlandı (Sürücü Motor Pinleri)

void setup() {
pinMode(in1,OUTPUT);
pinMode(in2,OUTPUT);
pinMode(in3,OUTPUT);
pinMode(in4,OUTPUT);
pinMode(e1,OUTPUT);
pinMode(e2,OUTPUT); // kurulum
}


void ileri (){ 
digitalWrite(in1,HIGH);
digitalWrite(in2,LOW);
digitalWrite(in4,HIGH);
digitalWrite(in3,LOW);  
} 


void geri (){
digitalWrite(in2,HIGH);
digitalWrite(in1,LOW);
digitalWrite(in3,HIGH);
digitalWrite(in4,LOW);  
}

void sag_ileri (){
digitalWrite(in2,LOW);
digitalWrite(in1,LOW);
digitalWrite(in4,HIGH);
digitalWrite(in3,LOW);  
}


void sag_geri (){
digitalWrite(in2,LOW);
digitalWrite(in1,LOW);
digitalWrite(in3,HIGH);
digitalWrite(in4,LOW);  
}

void sol_ileri (){
digitalWrite(in1,HIGH);
digitalWrite(in2,LOW);
digitalWrite(in3,LOW);
digitalWrite(in4,LOW);  
}

void sol_geri (){
digitalWrite(in2,HIGH);
digitalWrite(in1,LOW);
digitalWrite(in3,LOW);
digitalWrite(in4,LOW);  
}


void hizli() {
  analogWrite(e1,255);
  analogWrite(e2,255);
}

void orta() {
  analogWrite(e1,127);
  analogWrite(e2,127);
}

void dur() {
  analogWrite(e1,0);
  analogWrite(e2,0);
}

 
void loop() {
// Aracın ne yöne gitmesini istiyorsanız gerekli yönün fonksiyon adını giriniz.
}
