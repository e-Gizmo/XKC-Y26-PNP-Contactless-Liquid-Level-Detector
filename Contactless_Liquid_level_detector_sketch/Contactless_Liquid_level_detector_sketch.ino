//***************************************************************//
//             Contactless Liquid Level Detector                 //
//                       XKC-Y26-PNP                             //
//                                                               //
//   A simple sketch to get the signal output data of the liquid //
// level detector module. A non-contact liquid level sensors     //
// for non-metallic wall of the container without direct         //
// contact with the liquid. Supports PNP Ouput, high-low level   //
// output. Compatible in all gizDuino boards.                    //
//    Output: 1 = liquid detected, 0 =  no liquid detected       //                                  
//                                                               //
//                by e-Gizmo Mechatronix Central                 //
//                     http://www.e-gizmo.com                    //
//                                                               //
//***************************************************************//

//READ STATE
int LIQUID_LEVEL=0;
//PIN ASSIGNENT
int INPUT_PIN = 5;

void setup(){
  //INTIALIZE
  Serial.begin(9600);
  pinMode(INPUT_PIN,INPUT); //PIN IS SET AS INPUT

}

void loop() {
  //READING THE OUTPUT
  LIQUID_LEVEL=digitalRead(INPUT_PIN);
  
  //PRINTING THE DATA
  Serial.print("LIQUID LEVEL = ");
  
  //CONVERT IT TO DECIMAL
  Serial.println(LIQUID_LEVEL,DEC);
  
  //DELAY
  delay(500);
}       


