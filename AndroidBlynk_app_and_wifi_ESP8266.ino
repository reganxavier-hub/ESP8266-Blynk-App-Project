#define BLYNK_PRINT Serial
#include <ESP8266WiFi.h>
#include <BlynkSimpleEsp8266.h>

#define BLYNK_AUTH_TOKEN "VH6p0vG2zupo5r6puK-0nsxkEOthGCZl" //update here

char auth[] = BLYNK_AUTH_TOKEN;
const char ssid[] = "your wifi ssdi here";
const char pass[] = "password here";

#define BLYNK_TEMPLATE_ID "TMPLGJe-U4We"
#define BLYNK_TEMPLATE_NAME "WiFi test"
#define BLYNK_AUTH_TOKEN "VH6p0vG2zupo5r6puK-0nsxkEOthGCZl"

BLYNK_WRITE(V0)
{
  digitalWrite(D4, param.asInt());
}
void setup() {
  // put your setup code here, to run once:
  pinMode(D4, OUTPUT);
  Blynk.begin(auth, ssid, pass, "blynk.cloud", 80);

}

void loop() {
  Blynk.run();
  // put your main code here, to run repeatedly:

}
