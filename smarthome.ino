#include <Servo.h>
#include <SPI.h>
#include <MFRC522.h>
#include <SoftwareSerial.h>
#include <DHT.h>

// Define DHT sensor settings
#define dhtPin 7
#define dhtType DHT11
// RFID reader pin configuration
#define RST_PIN         9
#define SS_PIN          10

// Create instances for the RFID and DHT sensors
MFRC522 mfrc522(SS_PIN, RST_PIN);
DHT dht(dhtPin, dhtType);

// Initialize the servo motor for the door
Servo door;

// Pin definitions for various sensors and actuators
#define rA_flame  A0 // Flame sensor for area A
#define rB_flame  A1 // Flame sensor for area B
#define red       A2 // Red LED
#define relayA    A3 // Relay for area A
#define relayB    A4 // Relay for area B
#define ledA      A5 // LED for area A
#define ledB      2  // LED for area B
#define buzzer    4  // Buzzer
#define motionA   5  // Motion sensor for area A
#define motionB   6  // Motion sensor for area B
#define fan       8  // Fan control
int rA_val, rB_val; // Variables to store flame sensor readings

// Forward declaration of functions
void automation();

void setup() {
  // Initialize serial communication for debugging
  Serial.begin(9600);
  while (!Serial); // Wait for serial port to connect

  // Initialize SPI bus and RFID reader
  SPI.begin();
  mfrc522.PCD_Init();
  delay(4);
  mfrc522.PCD_DumpVersionToSerial();

  // Attach and initialize the servo motor for the door
  door.attach(3);
  door.write(0);

  // Initialize the DHT sensor
  dht.begin();

  // Set pin modes for sensors and actuators
  pinMode(rA_flame, INPUT);
  pinMode(rB_flame, INPUT);
  pinMode(red, OUTPUT);
  pinMode(buzzer, OUTPUT);
  pinMode(relayA, OUTPUT);
  pinMode(relayB, OUTPUT);
  pinMode(motionA, INPUT);
  pinMode(motionB, INPUT);
  pinMode(ledA, OUTPUT);
  pinMode(ledB, OUTPUT);
  pinMode(fan, OUTPUT);
}

void loop() {
  // Perform automation tasks
  automation();

  // Check if a new RFID card is present
  if (!mfrc522.PICC_IsNewCardPresent()) {
    return;
  }

  // Read the card
  if (!mfrc522.PICC_ReadCardSerial()) {
    return;
  }

  // Check if the card's UID matches the authorized UID
  if (mfrc522.uid.uidByte[0] == accessUID[0] && 
      mfrc522.uid.uidByte[1] == accessUID[1] && 
      mfrc522.uid.uidByte[2] == accessUID[2]) {
    Serial.println("Access Granted");
    digitalWrite(red, LOW);
    door.write(90);
  } else {
    Serial.println("Access Denied");
    digitalWrite(red, HIGH);
    door.write(0);
  }
  delay(10);
  mfrc522.PICC_HaltA(); // Halt RFID card reading
}

void bluetooth() {
  // Function for handling Bluetooth communication (not fully implemented in this snippet)
}

void temperatureControl() {
  // Function to control temperature (not fully implemented in this snippet)
}

void safety() {
  // Function to handle safety features such as flame detection and alarms
}

void automation() {
  // Function to handle automation based on motion sensors
}
