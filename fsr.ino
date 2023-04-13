/* Simple example code for Force Sensitive Resistor (FSR) with Arduino. More info: https://www.makerguides.com */

// Define FSR pin:
#define fsrpin1 A0
#define fsrpin2 A1
#define fsrpin3 A2
#define fsrpin4 A3
#define fsrpin5 A4
#define fsrpin6 A5

//Define variable to store sensor readings:
int fsrreading1; //Variable to store FSR value
int fsrreading2;
int fsrreading3;
int fsrreading4;
int fsrreading5;
int fsrreading6;

void setup() {
  // Begin serial communication at a baud rate of 9600:
  Serial.begin(9600);
}

void loop() {
  // Read the FSR pin and store the output as fsrreading:
  fsrreading1 = analogRead(fsrpin1);
  fsrreading2 = analogRead(fsrpin2);
  fsrreading3 = analogRead(fsrpin3);
  fsrreading4 = analogRead(fsrpin4);
  fsrreading5 = analogRead(fsrpin5);
  fsrreading6 = analogRead(fsrpin6);


  // Print the fsrreading in the serial monitor:
  // Print the Analog reading = 
  // Print the fsrreading:
  // Serial.println("=======================================================");
  Serial.print(" Analog reading of fsr1= ");
  Serial.println(fsrreading1);
  Serial.print(" Analog reading of fsr2= ");
  Serial.println(fsrreading2);
  Serial.print(" Analog reading of fsr3= ");
  Serial.println(fsrreading3);
  Serial.print(" Analog reading of fsr4= ");
  Serial.println(fsrreading4);
  Serial.print(" Analog reading of fsr5= ");
  Serial.println(fsrreading5);
  Serial.print(" Analog reading of fsr6= ");
  Serial.println(fsrreading6);
  // Serial.println("=======================================================");
    
  delay(2000);

  // We can set some threshholds to display how much pressure is roughly applied:
//  if (fsrreading < 10) {
//    Serial.println(" - No pressure");
//  } else if (fsrreading < 200) {
//    Serial.println(" - Light touch");
//  } else if (fsrreading < 500) {
//    Serial.println(" - Light squeeze");
//  } else if (fsrreading < 800) {
//    Serial.println(" - Medium squeeze");
//  } else {
//    Serial.println(" - Big squeeze");
//  }
//
//  delay(500); //Delay 500 ms.
}
