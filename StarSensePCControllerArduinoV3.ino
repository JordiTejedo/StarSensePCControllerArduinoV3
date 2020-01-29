/*
  StarSense Arduino Controller
*/

char val; // variable que recibe el dato del puerto serie

// the setup function runs once when you press reset or power the board
void setup() {
  pinMode(33, OUTPUT);
  pinMode(34, OUTPUT);
  pinMode(35, OUTPUT);
  pinMode(36, OUTPUT);
  pinMode(37, OUTPUT);
  pinMode(38, OUTPUT);
  pinMode(39, OUTPUT);
  pinMode(40, OUTPUT);
  pinMode(41, OUTPUT);
  pinMode(42, OUTPUT);
  pinMode(43, OUTPUT);
  pinMode(44, OUTPUT);
  pinMode(45, OUTPUT);
  pinMode(46, OUTPUT);
  pinMode(47, OUTPUT);
  pinMode(48, OUTPUT);
  pinMode(49, OUTPUT);
  pinMode(50, OUTPUT);
  pinMode(51, OUTPUT);
  pinMode(52, OUTPUT);
  Serial.begin(9600); // inicia la comunicación con el puerto serie a 9600bps
  val = '0';
}

// the loop function runs over and over again forever
void loop() {
  // si hay dato en el puerto lo lee
  if(Serial.available()){
    // lee y almacena el dato en 'val'  
    val = Serial.read();
  }
  //digitalWrite(33,HIGH);
  
  //ALINEAR
  if(val == 'A'){
    //activa el LED durante 1ms
    digitalWrite(34, HIGH);
    delay(10);
    digitalWrite(34, LOW);
  }
  
  //INTRO
  if(val == 'B'){
    //activa el LED durante 1ms
    digitalWrite(35, HIGH);
    delay(10);
    digitalWrite(35, LOW);
  }
  
  //ATRÁS
  if(val == 'C'){
    //activa el LED durante 1ms
    digitalWrite(36, HIGH);
    delay(10);
    digitalWrite(36, LOW);
  }
  
  //ARRIBA
  if(val == 'D'){
    //activa el LED
    digitalWrite(37, HIGH);
  }
  if(val == 'E'){
    //desactiva el LED
    digitalWrite(37, LOW);
  }
  
  //IZQUIERDA
  if(val == 'F'){
    //activa el LED
    digitalWrite(38, HIGH);
  }
  if(val == 'G'){
    //desactiva el LED
    digitalWrite(38, LOW);
  }
  
  //DERECHA
  if(val == 'H'){
    //activa el LED
    digitalWrite(39, HIGH);
  }
  if(val == 'I'){
    //desactiva el LED
    digitalWrite(39, LOW);
  }
  
  //ABAJO
  if(val == 'J'){
    //activa el LED
    digitalWrite(40, HIGH);
  }
  if(val == 'K'){
    //desactiva el LED
    digitalWrite(40, LOW);
  }
  
  //SISTEMA SOLAR
  if(val == 'L'){
    //activa el LED durante 1ms
    digitalWrite(41, HIGH);
    delay(10);
    digitalWrite(41, LOW);
  }
  
  //ESTRELLAS
  if(val == 'M'){
    //activa el LED durante 1ms
    digitalWrite(42, HIGH);
    delay(10);
    digitalWrite(42, LOW);
  }
  
  //CIELO PROFUNDO
  if(val == 'N'){
    //activa el LED durante 1ms
    digitalWrite(43, HIGH);
    delay(10);
    digitalWrite(43, LOW);
  }
  
  //IDENTIFICAR
  if(val == 'O'){
    //activa el LED durante 1ms
    digitalWrite(44, HIGH);
    delay(10);
    digitalWrite(44, LOW);
  }
  
  //TOUR CIELO
  if(val == 'P'){
    //activa el LED durante 1ms
    digitalWrite(45, HIGH);
    delay(10);
    digitalWrite(45, LOW);
  }
  
  //DESPLAZAR ARRIBA
  if(val == 'Q'){
    //activa el LED durante 1ms
    digitalWrite(46, HIGH);
    delay(10);
    digitalWrite(46, LOW);
  }
  
  //MENÚ
  if(val == 'R'){
    //activa el LED durante 1ms
    digitalWrite(47, HIGH);
    delay(10);
    digitalWrite(47, LOW);
  }
  
  //AYUDA
  if(val == 'S'){
    //activa el LED durante 1ms
    digitalWrite(48, HIGH);
    delay(10);
    digitalWrite(48, LOW);
  }
  
  //DESPLAZAR ABAJO
  if(val == 'T'){
    //activa el LED durante 1ms
    digitalWrite(49, HIGH);
    delay(10);
    digitalWrite(49, LOW);
  }
  
  //CELESTRON
  if(val == 'U'){
    //activa el LED
    digitalWrite(50, HIGH);
  }
  if(val == 'X')
  {
    //desactiva el LED
    digitalWrite(50, LOW);
  }
  
  //INFO OBJETO
  if(val == 'V'){
    //activa el LED durante 1ms
    digitalWrite(51, HIGH);
    delay(10);
    digitalWrite(51, LOW);
  }
  
  //VELOCIDAD MOTOR
  if(val == 'W'){
    //activa el LED durante 1ms
    digitalWrite(52, HIGH);
    delay(10);
    digitalWrite(52, LOW);
  }
  
  val = '0';
}
