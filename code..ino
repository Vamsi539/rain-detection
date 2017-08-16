
void setup()
{
 
baud:
  Serial.begin(9600);

}

void loop() 
{
  
	int sensorReading = analogRead(A0);

	int range = map(sensorReading, sensorMin, sensorMax, 0, 3);
        switch (range)
        {

 	  case 0:
	    Serial.println("Flood");

	    break;

	  case 1:
	    Serial.println("Rain Warning");

	    break;

	  case 2:
	    Serial.println("Not Raining");

	    break;

	}

	delay(1);
}
