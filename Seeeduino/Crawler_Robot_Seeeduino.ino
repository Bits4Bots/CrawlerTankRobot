// Define motor pins for L9110S Four motor driver
const int motorPin1 = 6;  // A1
const int motorPin2 = 5;  // A2
const int motorPin3 = 4;  // B1
const int motorPin4 = 3;  // B2
const int motorPin5 = 2;  // C1
const int motorPin6 = 1;  // C2

// Define HC-SR04 pins
const int trigPin = 10;
const int echoPin = 9;
const int groundPin = 8;  // Pin 8 used as ground control

// Define constants for distance threshold (cm)
const int obstacleDistanceThreshold = 10;  // 10 cm

void setup() {
  // Set motor pins as output
  pinMode(motorPin1, OUTPUT);
  pinMode(motorPin2, OUTPUT);
  pinMode(motorPin3, OUTPUT);
  pinMode(motorPin4, OUTPUT);
  pinMode(motorPin5, OUTPUT);
  pinMode(motorPin6, OUTPUT);
  
  // Set HC-SR04 pins
  pinMode(trigPin, OUTPUT);
  pinMode(echoPin, INPUT);
  pinMode(groundPin, OUTPUT);  // Set Pin 8 as output to simulate ground

  // Start serial communication for debugging
  Serial.begin(9600);
}

void loop() {
  // Measure distance using HC-SR04
  long duration, distance;
  
  // Ensure Trig is LOW before triggering the sensor
  digitalWrite(trigPin, LOW);
  delayMicroseconds(2);
  digitalWrite(trigPin, HIGH);  // Send pulse to trigger sensor
  delayMicroseconds(10);
  digitalWrite(trigPin, LOW);  // Stop the pulse
  digitalWrite(groundPin, LOW); // Simulate ground (keep Pin 8 LOW)

  // Measure the time for the Echo to return
  duration = pulseIn(echoPin, HIGH);

  // Calculate distance in cm
  distance = duration * 0.0344 / 2;

  // Print distance to Serial Monitor for debugging
  Serial.print("Distance: ");
  Serial.print(distance);
  Serial.println(" cm");

  // Check if the distance is valid
  if (distance > 0 && distance < 400) {  // Maximum valid range for the HC-SR04 sensor
    // If obstacle is detected, stop the robot
    if (distance < obstacleDistanceThreshold) {
      stopRobot();
    } else {
      moveForward();
    }
  } else {
    // Handle invalid distance readings (out of range or noise)
    Serial.println("Invalid distance reading!");
    stopRobot();
  }

  delay(100);  // Delay to avoid excessive readings
}

// Function to move robot forward
void moveForward() {
  digitalWrite(motorPin1, HIGH);
  digitalWrite(motorPin2, LOW);
  digitalWrite(motorPin3, LOW);
  digitalWrite(motorPin4, HIGH);
  digitalWrite(motorPin5, HIGH);
  digitalWrite(motorPin6, LOW);
}

//Light Function Off
void lightOff() {
  digitalWrite(motorPin5, LOW);
  digitalWrite(motorPin6, LOW);
}

// Function to stop the robot
void stopRobot() {
  digitalWrite(motorPin1, LOW);
  digitalWrite(motorPin2, LOW);
  digitalWrite(motorPin3, LOW);
  digitalWrite(motorPin4, LOW);

}
