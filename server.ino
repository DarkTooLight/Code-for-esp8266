_LITTLEFS
Usage
Here is an example for esp8266

/*
 *  WeMos D1 mini (esp8266)
 *  Start FTP server to upload data on SPIFFS
 *  by Mischianti Renzo <https://www.mischianti.org>
 *
 *  https://www.mischianti.org/2019/05/11/wemos-d1-mini-esp8266-integrated-spiffs-filesistem-part-2/
 *
 */

#include "Arduino.h"

#include <ESP8266WiFi.h>
#include <SimpleFtpServer.h>

const char* ssid = "YOUR_SSID";
const char* password = "YOUR_PASS";


FtpServer ftpSrv;   //set #define FTP_DEBUG in ESP8266FtpServer.h to see ftp verbose on serial


void setup(void){
  Serial.begin(115200);
  WiFi.begin(ssid, password);
  Serial.println("");

  // Wait for connection
  while (WiFi.status() != WL_CONNECTED) {
    delay(500);
    Serial.print(".");
  }
  Serial.println("");
  Serial.print("Connected to ");
  Serial.println(ssid);
  Serial.print("IP address: ");
  Serial.println(WiFi.localIP());

  /////FTP Setup, ensure SPIFFS is started before ftp;  /////////
  if (SPIFFS.begin()) {
//	  SPIFFS.format();
      Serial.println("SPIFFS opened!");
      ftpSrv.begin("esp8266","esp8266");    //username, password for ftp.  set ports in ESP8266FtpServer.h  (default 21, 50009 for PASV)
  }
}
void loop(void){
  ftpSrv.handleFTP();        //make sure in loop you call handleFTP()!!
}