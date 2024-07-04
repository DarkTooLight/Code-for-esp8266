
#include <IRremote.h>

int IRPIN = D5;

void setup()

{

Serial.begin(9600);

Serial.println("Enabling IRin");

IrReceiver.begin(IRPIN, ENABLE_LED_FEEDBACK);

Serial.println("Enabled IRin");

}

void loop()

{

if (IrReceiver.decode())

{
long int gg = IrReceiver.decodedIRData.decodedRawData;
Serial.println(gg, HEX);

IrReceiver.resume();

}

delay(500);

}