#include <PS4Controller.h>

void setup() {
  Serial.begin(115200);
  
  // Replace the MAC address below with your controller's paired address
  if (!PS4.begin("ec:e3:34:19:b2:3c")) {
    Serial.println("Bluetooth Initialization Failed!");
  }
  
  Serial.println("Ready! Press the PS Button on your controller...");
}

void loop() {
  if (PS4.isConnected()) {
    Serial.println("Success: Controller Paired!");
    
    // Optional: Turn the controller LED to Green upon connection
    PS4.setLed(0, 255, 0);
    PS4.send();

    delay(2000); // Slow down the serial output
  }
}