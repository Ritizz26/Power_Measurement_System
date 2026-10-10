#include<LiquidCrystal_I2C.h>
#include<Wire.h>
#include<Adafruit_INA219.h>
Adafruit_INA219 ina;
LiquidCrystal_I2C lcd(0x27, 16, 2);
void setup() {
  lcd.init();
  lcd.backlight();
  lcd.setCursor(1,0);
   if (!ina.begin()){
    lcd.setCursor(0,0);
    lcd.print("ERROR: INA219");
    lcd.setCursor(0,1);
    lcd.print("not found");
    while(1){
      delay(10);  
    }
  }
  lcd.setCursor(0,0);
  lcd.print("INA219 connected");
}
void loop() {
float shuntV= ina.getShuntVoltage_mV();
  float BusV= ina.getBusVoltage_V();
  float Current= ina.getCurrent_mA();
  float Power= BusV*Current;
  lcd.setCursor(0,0);
  lcd.print("Voltage: ");
  lcd.print(BusV);
  lcd.print(" V ");

  lcd.setCursor(0,1);
  lcd.print("Current: ");
  lcd.print(Current);
  lcd.print(" mA");
  
  delay(3000);
  lcd.clear();
  lcd.setCursor(0,0);
  lcd.print("Power: ");
  lcd.print(Power);
  lcd.print(" mW ");
  delay(3000);
  ina.begin();
  
}
