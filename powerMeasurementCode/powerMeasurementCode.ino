#include<Wire.h>
#include<Adafruit_INA219.h>
Adafruit_INA219 ina;
void setup() {
  Serial.begin(9600);
  Serial.print("INA219 Starting....");
  if (!ina.begin()){
    Serial.print("ERROR: INA219 not found");
    while(1){
      delay(10);  
    }
  }
  Serial.print("\nINA219 connected\n");
}

void loop() {
  float shuntV= ina.getShuntVoltage_mV();
  float BusV= ina.getBusVoltage_V();
  float Current= ina.getCurrent_mA();
  float Power= ina.getPower_mW();

  Serial.print("\nBus Voltage: ");
  Serial.print(BusV);
  Serial.println(" V");

  Serial.print("Shunt Voltage: ");
  Serial.print(shuntV);
  Serial.println(" mV");

  Serial.print("Current: ");
  Serial.print(Current);
  Serial.println(" mA");

  Serial.print("Power: ");
  Serial.print(Power);
  Serial.println(" mW");
  delay(5000);
  ina.begin();
}
