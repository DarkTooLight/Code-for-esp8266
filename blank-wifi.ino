#define BLYNK_TEMPLATE_ID "TMPL6H0UmNwk6"
#define BLYNK_TEMPLATE_NAME "Quickstart Template"
#define BLYNK_AUTH_TOKEN "XohxCnr6eiu8hQnafLo5XrGAmTMhgAGo"


#define BLYNK_PRINT Serial


#include <ESP8266WiFi.h>
#include <BlynkSimpleEsp8266.h>
#include <DHT.h>

char ssid[] = "No Network";
char pass[] = "11223344";


//Code

BLYNK_WRITE(V0){
  int value01 = param.asInt();
  
  if(value01 == 1){
    digitalWrite(D5,HIGH);
  }
  if(value01 == 0){
    digitalWrite(D5,LOW);
  }
}

BLYNK_WRITE(V1){
  int value02 = param.asInt();
  
  if(value02 == 1){
    digitalWrite(D6,HIGH);
  }
  if(value02 == 0){
    digitalWrite(D6,LOW);
  }
}

//temp-s
#define DHTPIN D1
#define DHTTYPE DHT11

DHT dht(DHTPIN,DHTTYPE);


void setup()
{
  Serial.begin(115200);

  Blynk.begin(BLYNK_AUTH_TOKEN, ssid, pass);
  
pinMode(D5,OUTPUT);
pinMode(D6,OUTPUT);

  // tamparacer

     dht.begin();
}

void loop()
{
  Blynk.run();
  //tapm-s
        float humidity = dht.readHumidity();
        float temperature = dht.readTemperature();
  
        if (isnan(humidity) || isnan(temperature)) {
        Serial.println("Failed to read from DHT sensor!");
        return;
        }
  
       // Serial.println("Temperature: "Humidity);
     Serial.println(temperature);
        Serial.println(" °C");
     Serial.println(humidity);
        Serial.println(" %");
  
        Blynk.virtualWrite(V2, humidity);
        Blynk.virtualWrite(V3, temperature);
  
        delay(1000); // Update every 2 seconds
}
