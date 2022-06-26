void setup() 
{
  pinMode(A0, INPUT);
  pinMode(A1, INPUT);
  pinMode(A2, INPUT);
  pinMode(A3, INPUT);
  pinMode(A4, INPUT);
  pinMode(A5, INPUT);
  pinMode(7, INPUT);
  pinMode(8, INPUT);
  pinMode(9, INPUT);
  pinMode(10, INPUT);
  pinMode(12, INPUT);
  pinMode(13, INPUT);
  pinMode(4, INPUT);
  pinMode(2, OUTPUT);
  pinMode(6, OUTPUT);
  pinMode(5, OUTPUT);  
  digitalWrite(5,HIGH);
}

void loop() 
{
  

     if(digitalRead(A0)==HIGH)
     {
         while(digitalRead(A0)==HIGH)
         tone(2,240);   
         noTone(2);
     }
     else if(digitalRead(A1)==HIGH)
     {
         while(digitalRead(A1)==HIGH) 
         tone(2,256);  
         noTone(2);
     }
     else if(digitalRead(A2)==HIGH)
     {
         while(digitalRead(A2)==HIGH)
         tone(2,270);  
          noTone(2);
     }
     else if(digitalRead(A3)==HIGH)
     {
         while(digitalRead(A3)==HIGH)
         tone(2,288);  
          noTone(2);
     }
     else if(digitalRead(A4)==HIGH)
     {
         while(digitalRead(A4)==HIGH)
         tone(2,300);  
          noTone(2);
     }
     else if(digitalRead(A5)==HIGH)
     {
         while(digitalRead(A5)==HIGH)
         tone(2,320);  
         noTone(2);
     }
     else if(digitalRead(7)==HIGH)
     {
         while(digitalRead(7)==HIGH)
         tone(2,450); 
         noTone(2);
     }
     else if(digitalRead(8)==HIGH)
     {
         while(digitalRead(8)==HIGH)
         tone(2,432);  
         noTone(2);
     }
     else if(digitalRead(9)==HIGH)
     {
         while(digitalRead(9)==HIGH)
         tone(2,400);    
         noTone(2);
     }
     else if(digitalRead(10)==HIGH)
     {
         while(digitalRead(10)==HIGH)
         tone(2,384);  
         noTone(2);
     }
     else if(digitalRead(12)==HIGH)
     { 
         while(digitalRead(12)==HIGH)
         tone(2,360);  
         noTone(2);
     }
     else if(digitalRead(13)==HIGH)
     {
         while(digitalRead(13)==HIGH)
         tone(2,337.5); 
         noTone(2);
     }
     else if(digitalRead(4)==HIGH)
     {
         while(digitalRead(4)==HIGH)
         {
            
            tone(2,480);
            digitalWrite(6,HIGH);
         }
         digitalWrite(6,LOW);  
         noTone(2);
     }
    

 }
