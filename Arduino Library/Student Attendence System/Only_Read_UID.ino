#include <SPI.h>
#include <MFRC522.h>
#include <Wire.h>
#include <LiquidCrystal_I2C.h>
LiquidCrystal_I2C lcd(0x27, 16, 2);
#define SS_PIN 10
#define RST_PIN 9
MFRC522 mfrc522(SS_PIN, RST_PIN);  // Create MFRC522 instance.

int readsuccess;
byte readcard[4];
char str[32] = "";
String StrUID;
int const Buzzer=8;
int const GreenLed=5;
String name1="Jiya";
String uid1="49E5CF6D";
String name2="Jamshid Also";
String uid2="133ACA21";
void setup() {
  lcd.begin();
  Serial.begin(9600); // Initialize serial communications with the PC
  SPI.begin();      // Init SPI bus
  mfrc522.PCD_Init(); // Init MFRC522 card

  Serial.println("CLEARDATA");
  Serial.println("LABEL,Date,Time,RFID UID,Name,Status");
  delay(1000);
  
  Serial.println("Scan PICC to see UID...");

  lcd.setCursor(0,0);
  lcd.print("Good Morning");

  lcd.setCursor(0,1);
  lcd.print("Scan to see UID..");
  delay(200);
  
  Serial.println("");
  pinMode(GreenLed,OUTPUT);
   pinMode(Buzzer,OUTPUT);

}
// --------------------------------------------------------------------
void loop() {
  lcd.clear();
  lcd.setCursor(0,0);
  lcd.print("Good Morning");

  lcd.setCursor(0,1);
  lcd.print("Scan to see UID..");
  delay(200);
  readsuccess = getid();
 
  if(readsuccess){
    Serial.println( (String) "DATA,DATE,TIME" + StrUID +"\t"+ name1 + "\tPresent");
     
  }
}
// --------------------------------------------------------------------
int getid(){  
  if(!mfrc522.PICC_IsNewCardPresent()){
    return 0;
  }
  if(!mfrc522.PICC_ReadCardSerial()){
    return 0;
  }
 
  
  Serial.println("THE UID OF THE SCANNED CARD IS:");
  
  
  for(int i=0;i<4;i++){
    readcard[i]=mfrc522.uid.uidByte[i]; //storing the UID of the tag in readcard
    array_to_string(readcard, 4, str);
    StrUID = str;


    //uncomment this to show uid of new card
    //Serial.println(StrUID);                     //###########################################################


    
    if(StrUID==uid1){
      digitalWrite(GreenLed,HIGH);
     delay(500);
      digitalWrite(GreenLed,HIGH);
     digitalWrite(Buzzer,HIGH);
      delay(30);
      digitalWrite(Buzzer,LOW);

        
      lcd.clear();
  lcd.setCursor(0,0);
  lcd.print(name1);
  lcd.setCursor(0,1);
  lcd.print("Present");
  delay(2000);
  
    }
    else if(StrUID==uid2){
      digitalWrite(GreenLed,HIGH);
     delay(500);
      digitalWrite(GreenLed,HIGH);
     digitalWrite(Buzzer,HIGH);
      delay(30);
      digitalWrite(Buzzer,LOW);
      lcd.clear();
  lcd.setCursor(0,0);
  lcd.print(name2);
  lcd.setCursor(0,1);
  lcd.print("Present");
  delay(2000);
  
    }
  }
  mfrc522.PICC_HaltA();
  return 1;
}
// --------------------------------------------------------------------
void array_to_string(byte array[], unsigned int len, char buffer[])
{
    for (unsigned int i = 0; i < len; i++)
    {
        byte nib1 = (array[i] >> 4) & 0x0F;
        byte nib2 = (array[i] >> 0) & 0x0F;
        buffer[i*2+0] = nib1  < 0xA ? '0' + nib1  : 'A' + nib1  - 0xA;
        buffer[i*2+1] = nib2  < 0xA ? '0' + nib2  : 'A' + nib2  - 0xA;
    }
    buffer[len*2] = '\0';
}
