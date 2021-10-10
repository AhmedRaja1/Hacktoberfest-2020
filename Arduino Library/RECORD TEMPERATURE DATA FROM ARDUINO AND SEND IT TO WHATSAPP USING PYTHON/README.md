# Recording temperature data from Arduino and sending it to Whatsapp using python

This readme file contains all the necessary elements to get started with the project.

## Software and Hardware used
- Temperature Sensor LM35
- Breadboard
- Arduino Uno R3
- [twilio api](https://www.twilio.com/)
- [cool term software](https://freeware.the-meiers.org/)

## Arduino Code
```c++
float temp;
int tempPin = 0;

void setup() {
   Serial.begin(9600);
}

void loop() {
   temp = analogRead(tempPin);
   // read analog volt from sensor and save to variable temp
   temp = temp * 0.48828125;
   // convert the analog volt to its temperature equivalent
   Serial.print("TEMPERATURE = ");
   Serial.print(temp); // display temperature value
   Serial.print("*C");
   Serial.println();
   delay(1000); // update sensor reading each one second
}

```

## Python Code
```python
from twilio.rest import Client
import time

temp = "no"
last_line = "no"

while True:
    with open("msg.txt","r") as file:
        first_line = file.readline()
        for last_line in file:
            pass
    temp = last_line
    
    from twilio.rest import Client 
 
    account_sid = 'YOUR AUTH KEY' 
    auth_token = 'YOUR AUTH TOKEN' 
    client = Client(account_sid, auth_token) 
 
    message = client.messages.create( 
                              from_='whatsapp:+14155238886',  
                              body=temp,      
                              to='whatsapp:+YOUR WHATSAPP NUMBER' 
                          ) 
 
    print("message sent")
    time.sleep(1)
    
```
## Wiring
<img src='https://www.tutorialspoint.com/arduino/images/temperature_sensor_circuit_connection.jpg'>

## Video Tutorial
[<img src='https://i.pinimg.com/originals/75/07/29/75072995840919abe33aa48b348f5e8b.jpg'>](https://youtu.be/wuUwYeYMTws)
