// include DS1820
#include <OneWire.h>
#include <DallasTemperature.h>

// BuiltIn LED in 13
#define LED1 13
// relay in pin 2
#define RELAY1  3
// sensor in pin 1
OneWire oneWire(2);
DallasTemperature sensors(&oneWire);
// counter to avoid flux
int c = 0;
// temperature reading
float curr = 0.0;

void setup() {
  // Serial.begin(115200);
  // Serial.println("INIT");

  sensors.begin();
  pinMode(RELAY1, OUTPUT);
  pinMode(LED1, OUTPUT); 
  digitalWrite(RELAY1, LOW);
  digitalWrite(LED1, LOW);
}

void loop() {
  sensors.requestTemperatures();  
  curr = sensors.getTempCByIndex(0);
  // Serial.print("Temperature for Device 1 is: ");
  // Serial.println(curr);
  
  if (curr < 19 && c>=30) {
    digitalWrite(RELAY1, HIGH);
    digitalWrite(LED1, HIGH);
    // Serial.println("RELAY: ON");
    c = 0;
  } else
  if (curr > 20 && c>=30) {
    digitalWrite(RELAY1, LOW);
    digitalWrite(LED1, LOW);
    // Serial.println("RELAY: OFF");
    c = 0;
  } 
  delay(1000);
  if (c<60) c++;
}



