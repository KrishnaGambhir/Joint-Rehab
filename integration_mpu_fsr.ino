
#include <MPU6050_tockn.h>
#include <Wire.h>

//initialize MPU6050
MPU6050 mpu6050(Wire);

long timer = 0;

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
  Serial.begin(115200);
  // starting up of mpu
  Wire.begin();
  mpu6050.begin();
  mpu6050.calcGyroOffsets(360,360,360);
}

void loop() {
  // Read the FSR pin and store the output as fsrreading:
//  fsrreading1 = analogRead(fsrpin1);
//  fsrreading2 = analogRead(fsrpin2);
//  fsrreading3 = analogRead(fsrpin3);
//  fsrreading4 = analogRead(fsrpin4);
//  fsrreading5 = analogRead(fsrpin5);
//  fsrreading6 = analogRead(fsrpin6);


  // Print the fsrreading in the serial monitor:
  // Print the Analog reading = 
  // Print the fsrreading:
//  Serial.print("Analog reading of fsr1= ");
//  Serial.println(fsrreading1);
//  Serial.print("Analog reading of fsr2= ");
//  Serial.println(fsrreading2);
//  Serial.print("Analog reading of fsr3= ");
//  Serial.println(fsrreading3);
//  Serial.print("Analog reading of fsr4= ");
//  Serial.println(fsrreading4);
//  Serial.print("Analog reading of fsr5= ");
//  Serial.println(fsrreading5);
//  Serial.print("Analog reading of fsr6= ");
//  Serial.println(fsrreading6);
//    
  delay(500);

  mpu6050.update();

  if(millis() - timer > 1000){

    Serial.println("============================================");
//    Serial.print("temp : ");Serial.println(mpu6050.getTemp());
    
//    Serial.print("accX : ");Serial.print(mpu6050.getAccX());
//    Serial.print(" accY : ");Serial.print(mpu6050.getAccY());
//    Serial.print(" accZ : ");Serial.println(mpu6050.getAccZ());

    Serial.print("gyroX : ");Serial.print(mpu6050.getGyroX());
    Serial.print(" gyroY : ");Serial.print(mpu6050.getGyroY());
    Serial.print(" gyroZ : ");Serial.println(mpu6050.getGyroZ());

//    Serial.print("accAngleX : ");Serial.print(mpu6050.getAccAngleX());
//    Serial.print(" accAngleY : ");Serial.println(mpu6050.getAccAngleY());

//    Serial.print("gyroAngleX : ");Serial.print(mpu6050.getGyroAngleX());
//    Serial.print(" gyroAngleY : ");Serial.print(mpu6050.getGyroAngleY());
//    Serial.print(" gyroAngleZ : ");Serial.println(mpu6050.getGyroAngleZ());

    Serial.print("AngleX : ");Serial.print(mpu6050.getAngleX());
    Serial.print(" AngleY : ");Serial.print(mpu6050.getAngleY());
    Serial.print(" AngleZ : ");Serial.println(mpu6050.getAngleZ());

    Serial.println("============================================");
    timer = millis();

    int mpuAngleX = mpu6050.getAngleX();
    int mpuAngleY = mpu6050.getAngleY();
    int mpuAngleZ = mpu6050.getAngleZ();

    if (mpuAngleY<48){
      println("Deformed foot");
    }
    else if(mpuAngleY>202){
      println("flat foot condition");  
    } 

    if (mpuAngleX<6){
      println("Deformed foot");
    }
  }
  
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
