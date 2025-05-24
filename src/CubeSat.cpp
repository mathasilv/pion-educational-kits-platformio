#include "PION_System.h"
#include "WiFi.h"

System cubeSat;

// void networkConnect() {
//   btStop();

//   Serial.println();
//   Serial.print("Tentando conectar a rede WiFi: MATHEUS  ");

//   WiFi.mode(WIFI_STA);
//   WiFi.begin("MATHEUS  ", "12213490");

//   unsigned long startTime = millis();
//   const unsigned long timeout = 5000;

//   Serial.print("Conectando");
//   while (WiFi.status() != WL_CONNECTED && (millis() - startTime) < timeout) {
//     Serial.print(".");
//     delay(500);
//   }
//   Serial.println();

//   if (WiFi.status() == WL_CONNECTED) {
//     Serial.println("WiFi conectada!");
//     Serial.print("Endereco IP: ");
//     Serial.println(WiFi.localIP());
//   } else {
//     Serial.println("Nao foi possivel conectar a rede WiFi apos 5 segundos.");
//     WiFi.disconnect(true);
//     WiFi.mode(WIFI_OFF); 
//   }
// }

void setup(){
  cubeSat.init(true);
}

void loop(){
}