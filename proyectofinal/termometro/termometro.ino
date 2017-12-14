byte PIN_SENSOR = A0;
int dato_serial =0; // para los datos de entrada serie
float C;
int temp;
 
void setup() {
Serial.begin(9600); // abre el puerto serie, establece la velocidad a 9600 bps
}
 
void loop() {
C = (5.0 * analogRead(PIN_SENSOR) * 100.0) / 1024;
temp=C;
// envía datos solo cuando recibe datos:
if (Serial.available() > 0) {  // si ha llegado un dato serial
lectura_dato(); // realiza una operacion
comparacion_dato();          // llama a la funcion de comparar el dato
 
} }
 
void lectura_dato (void){
// lee el byte de entrada:
dato_serial = Serial.read();
}
 
void comparacion_dato (void){
if (dato_serial=='T') { // si el dato serial es la T envía la temperatura a java
Serial.write(temp);
}}

