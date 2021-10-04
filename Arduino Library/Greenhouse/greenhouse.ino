/*
 * lcd.print(x,y,"messsage"); 
 * where x is a symbol position(0 to 15)
 * y is a line number (0 or 1)
 * lcd.clear();
 */

#define BLYNK_PRINT Serial
#include <ESP8266WiFi.h>
#include <BlynkSimpleEsp8266.h>
#include <SoftwareSerial.h>
#include <DHT.h>
#define led1 D2
#define sensor2 A0

BlynkTimer timer;

WidgetLCD lcd(V2);
String data;
String I;
char auth[] = "z9m56HJwT08Yed-AflVuvhOYHJsy0F5V";

// Your WiFi credentials.
// Set password to "" for open networks.
char ssid[] = "ZONG4G-52FF";
char pass[] = "01072891";


int flag=0;

SimpleTimer timerx;
int mq2 = D5; // smoke sensor is connected with the analog pin A0 
int data1 = 0;
int gas_value;   
void getSendData1()
{
data1 = digitalRead(mq2); 
  Blynk.virtualWrite(V1, data1);
  //digitalWrite(D5, LOW);
  if (data1 > 1 )
  {
    Blynk.notify("co2 are detected!"); 
    digitalWrite(D3, HIGH);
    delay(4000);
    Serial.println("Alarm On");
  }
  else
 {
  digitalWrite(D3, LOW);
  }

 
}


int LED = D7; // Define LED as an Integer (whole numbers) and pin D7 on Wemos D1 Mini Pro
const int sensorPin = D4; 
int sensorState = 0;
int lastState = 0;

//SimpleTimer timer;

String myString; // complete message from arduino, which consistors of snesors data
char rdata; // received charactors

#define DHTPIN D6          // Digital pin 8

#define DHTTYPE DHT11     // DHT 11
DHT dht(DHTPIN, DHTTYPE);
SimpleTimer timer3;
BlynkTimer timerz;


// This function sends Arduino's up time every second to Virtual Pin (1).
// In the app, Widget's reading frequency should be set to PUSH. This means
// that you define how often to send data to Blynk App.
void myTimerEvent()
{
  // You can send any value at any time.
  // Please don't send more that 10 values per second.
  Blynk.virtualWrite(V1, millis() / 1000);
  
}

void sendSensor()
{
  float h = dht.readHumidity();
  float t = dht.readTemperature(); // or dht.readTemperature(true) for Fahrenheit

  if (isnan(h) || isnan(t)) {
    Serial.println("Failed to read from DHT sensor!");
    return;
  }
  // You can send any value at any time.
  // Please don't send more that 10 values per second.
  Blynk.virtualWrite(V5, h);
  Blynk.virtualWrite(V6, t);

    float tmper = dht.readTemperature();
  if(tmper < 30){
    digitalWrite(D8 ,LOW); // turn LED widget on full brightness (255)
  } else {
    digitalWrite(D8 ,HIGH); // turn LED widget off
  }

  
}


void setup()


{
  // Debug console
  Serial.begin(9600);
  pinMode(LED, OUTPUT);
  pinMode(led1, OUTPUT);

  digitalWrite(led1, LOW);
  
  timerx.setInterval(1000L, sendSensor2);
  timerz.setInterval(1000L, sendSensor);
  Blynk.begin(auth, ssid, pass);  //wifi name and password
   dht.begin();
  timer3.setInterval(1000L,sensorvalue1);
  pinMode(sensorPin, INPUT);
    timer.setInterval(1000L,sensorvalue1); 

//Smoke Code
    pinMode(D5,INPUT);
    pinMode(D3, OUTPUT);  //for fan of smoke
//timer.setInterval(1000L,notifyOnFire); 
  pinMode(D8, OUTPUT);
  timerx.setInterval(1000L, getSendData1);

}

void loop()



{
 Blynk.run();
 timer3.run();
 timerx.run();
 timerz.run();

   if (Serial.available() == 0 ) 
   {
  Blynk.run();
  timer.run(); // Initiates BlynkTimer
   }
   
  if (Serial.available() > 0 ) 
  {
    rdata = Serial.read(); 
    myString = myString+ rdata; 
   Serial.print(rdata);
    if( rdata == '\n')
    {
I = getValue(myString, ',', 0);
  myString = "";
 // Serial.println(I);
lcd.print(0,0,"pH Value:");
    }
  }

//}
 sensorState = digitalRead(sensorPin);
Serial.println(sensorState);

if (sensorState == 1 && lastState == 0) {
  digitalWrite(LED, HIGH);
  Serial.println("water is required, send notification");
  Blynk.notify("Water your plants !!!");
  lastState = 1;
  delay(1000);
//send notification
    
  } 
  else if (sensorState == 1 && lastState == 1) {
    digitalWrite(LED, HIGH);
    //do nothing, has not been watered yet
  Serial.println("has not been watered yet");
  delay(1000);
  }
  else {
    //st
    digitalWrite(LED, LOW);
    Serial.println("does not need water");
    lastState = 0;
    delay(1000);
  }
  
  delay(100);
}

// This function will be called every time button Widget
// in Blynk app writes values to the Virtual Pin V3
BLYNK_WRITE(V3) {
 int pinValue = param.asInt(); // Assigning incoming value from pin V3 to a variable
 if (pinValue == 1) {
    digitalWrite(LED, HIGH); // Turn LED on.
  } else {
    digitalWrite(LED, LOW); // Turn LED off.
 }
}

//SmokeCode

void sendSensor2()
{
  int LDR = analogRead(sensor2);
    if(LDR >150)
  {
    digitalWrite(led1, HIGH);
    Blynk.notify("Light ON");
  }
  else
  {
    digitalWrite(led1, LOW);
   
  }

  Blynk.virtualWrite(V7, LDR);

}

void sensorvalue1()
{
data = data + I; 
lcd.print(0,0,"pH Value:");
 lcd.print(0,1,data);
 data = "";

}



String getValue(String data, char separator, int index)
{
    int found = 0;
    int strIndex[] = { 0, -1 };
    int maxIndex = data.length() - 1;

    for (int i = 0; i <= maxIndex && found <= index; i++) {
        if (data.charAt(i) == separator || i == maxIndex) {
            found++;
            strIndex[0] = strIndex[1] + 1;
            strIndex[1] = (i == maxIndex) ? i+1 : i;
        }
    }
    return found > index ? data.substring(strIndex[0], strIndex[1]) : "";
}
