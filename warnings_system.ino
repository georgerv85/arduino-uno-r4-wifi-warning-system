// Γιατί βάζουμε systemCheck = true; μέσα στη loop(); Αν σε έναν κύκλο είχαμε warning: και μετά σε επόμενο κύκλο οι τιμές διορθώνονταν, πρέπει το σύστημα να μπορεί να ξαναγίνει true.

int packet = 1;
float temperature = 41.5;
float batteryVoltage = 7.4;
float signalStrength = 12.0;

const float highTemperature = 40;
const float lowBatteryVoltage = 7.2;
const float lowSignalStrength = 50.0;




void setup() {
  Serial.begin(9600);
  delay(1000);
  while (!Serial) {
    // περιμένει να ανοίξει η σειριακή σύνδεση
  }
}

void loop() {

  bool systemCheck;
  
  if(temperature > highTemperature || batteryVoltage < lowBatteryVoltage || signalStrength < lowSignalStrength){
    systemCheck = false;
  }else{
    systemCheck = true;
  }

  Serial.print("Packet: ");
  Serial.println(packet);

  Serial.print("Temperature: ");
  Serial.println(temperature, 1);

  Serial.print("Battery Voltage: ");
  Serial.println(batteryVoltage, 1);

  Serial.print("Signal Strength: ");
  Serial.println(signalStrength, 1);

  if (systemCheck) {
    Serial.println("System Check: OK");
  }else{

    Serial.println("System Check: WARNING");
    Serial.println("WARNINGS :");

    if (temperature > highTemperature) {
      Serial.println("HIGH TEMPERATURE");
    }

    if (batteryVoltage < lowBatteryVoltage) {
      Serial.println("LOW BATTERY VOLTAGE");
    }

    if (signalStrength < lowSignalStrength) {
      Serial.println("LOW SIGNAL STRENGTH");
    }

  }

  Serial.println("----------------------------");

  packet++;
  delay(5000);

}
