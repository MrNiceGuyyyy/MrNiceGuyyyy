/****************************************
*   BASIC LED SEQUENCE PROGRAMMING        *
*   SUBMITTED BY: VELEZ,CLARK DENNIEL V."*
*   SUBMITTED TO: PRG. MICHAEL T. SAMONTE* 
* *****************************************/

#define LED1  1
#define LED2  2
#define LED3  3
#define LED4  4
#define LED5  5
#define LED6  6
#define LED7  7
#define LED8  8
#define LED9  9
#define LED10 10


void setup() {
  pinMode (LED1, OUTPUT);
  pinMode (LED2, OUTPUT);
  pinMode (LED3, OUTPUT);
  pinMode (LED4, OUTPUT);
  pinMode (LED5, OUTPUT);
  pinMode (LED6, OUTPUT);
  pinMode (LED7, OUTPUT);
  pinMode (LED8, OUTPUT);
  pinMode (LED9, OUTPUT);
  pinMode (LED10, OUTPUT);
}

void loop() {
  /*     1st PATTERN     */
   digitalWrite(LED1, HIGH);
  delay (500);
  digitalWrite(LED1, LOW);
  delay (500);
  digitalWrite(LED2, HIGH);
  delay (500);
  digitalWrite(LED2, LOW);
  delay (500);
  digitalWrite(LED3, HIGH);
  delay (500);
  digitalWrite(LED3, LOW);
  delay (500);
  digitalWrite(LED4, HIGH);
  delay (500);
  digitalWrite(LED4, LOW);
  delay (500);
  digitalWrite(LED5, HIGH);
  delay (500);
  digitalWrite(LED5, LOW);
  delay (500);
  digitalWrite(LED6, HIGH);
  delay (500);
  digitalWrite(LED6, LOW);
  delay (500);
  digitalWrite(LED7, HIGH);
  delay (500);
  digitalWrite(LED7, LOW);
  delay (500);
  digitalWrite(LED8, HIGH);
  delay (500);
  digitalWrite(LED8, LOW);
  delay (500);
  digitalWrite(LED9, HIGH);
  delay (500);
  digitalWrite(LED9, LOW);
  delay (500);
  digitalWrite(LED10, HIGH);
  delay (500);
  digitalWrite(LED10, LOW);
  delay (500);
  /*    2nd PATTERN      */
  digitalWrite(LED1, HIGH);
  digitalWrite(LED10, HIGH);
  delay (500);
  digitalWrite(LED1, LOW);
  digitalWrite(LED10, LOW);
  delay (500);
  digitalWrite(LED2, HIGH);
  digitalWrite(LED9, HIGH);
  delay (500);
  digitalWrite(LED2, LOW);
  digitalWrite(LED9, LOW);
  delay (500);
  digitalWrite(LED3, HIGH);
  digitalWrite(LED8, HIGH);
  delay (500);
  digitalWrite(LED3, LOW);
  digitalWrite(LED8, LOW);
  delay (500);
  digitalWrite(LED4, HIGH);
  digitalWrite(LED7, HIGH);
  delay (500);
  digitalWrite(LED4, LOW);
  digitalWrite(LED7, LOW);
  delay (500);
  digitalWrite(LED5, HIGH);
  digitalWrite(LED6, HIGH);
  delay (500);
  digitalWrite(LED5, LOW);
  digitalWrite(LED6, LOW);
  delay (500);
  digitalWrite(LED5, HIGH);
  digitalWrite(LED6, HIGH);
  delay (500);
  digitalWrite(LED5, LOW);
  digitalWrite(LED6, LOW);
  delay (500);
  digitalWrite(LED4, HIGH);
  digitalWrite(LED7, HIGH);
  delay (500);
  digitalWrite(LED4, LOW);
  digitalWrite(LED7, LOW);
  delay (500);
  digitalWrite(LED3, HIGH);
  digitalWrite(LED8, HIGH);
  delay (500);
  digitalWrite(LED3, LOW);
  digitalWrite(LED8, LOW);
  delay (500);
  digitalWrite(LED2, HIGH);
  digitalWrite(LED9, HIGH);
  delay (500);
  digitalWrite(LED2, LOW);
  digitalWrite(LED9, LOW);
  delay (500);
  digitalWrite(LED1, HIGH);
  digitalWrite(LED10, HIGH);
  delay (500);
  digitalWrite(LED1, LOW);
  digitalWrite(LED10, LOW);
  delay (500);
  /*    3rd PATTERN      */
  digitalWrite(LED1, HIGH);
  digitalWrite(LED3, HIGH);
  delay (500);
  digitalWrite(LED5, HIGH);
  digitalWrite(LED7, HIGH);
  delay (500);
  digitalWrite(LED1, LOW);
  digitalWrite(LED3, LOW);
  digitalWrite(LED5, LOW);
  digitalWrite(LED7, LOW);
  delay (500);
  digitalWrite(LED10, HIGH);
  digitalWrite(LED8, HIGH);
  delay (500);
  digitalWrite(LED5, LOW);
  digitalWrite(LED7, LOW);
  delay (500);
  digitalWrite(LED10, LOW);
  digitalWrite(LED8, LOW);
  delay (500);
  digitalWrite(LED6, HIGH);
  digitalWrite(LED4, HIGH);
  delay (500);
  digitalWrite(LED2, HIGH);
  digitalWrite(LED9, HIGH);
  delay (500);
  digitalWrite(LED6, LOW);
  digitalWrite(LED4, LOW);
  digitalWrite(LED2, LOW);
  digitalWrite(LED9, LOW);
  delay (500);
  /*     4TH PATTERN    */
  digitalWrite(LED1, LOW);
  digitalWrite(LED3, LOW);
  digitalWrite(LED5, LOW);
  digitalWrite(LED7, LOW);
  digitalWrite(LED9, LOW);
  delay (500);
  digitalWrite(LED1, HIGH);
  digitalWrite(LED3, HIGH);
  digitalWrite(LED5, HIGH);
  digitalWrite(LED7, HIGH);
  digitalWrite(LED9, HIGH);
  delay (500);
  digitalWrite(LED2, LOW);
  digitalWrite(LED4, LOW);
  digitalWrite(LED6, LOW);
  digitalWrite(LED8, LOW);
  digitalWrite(LED10, LOW);
  delay (500);
  digitalWrite(LED1, LOW);
  digitalWrite(LED3, LOW);
  digitalWrite(LED5, LOW);
  digitalWrite(LED7, LOW);
  digitalWrite(LED9, LOW);
  delay (500);
  digitalWrite(LED2, HIGH);
  digitalWrite(LED4, HIGH);
  digitalWrite(LED6, HIGH);
  digitalWrite(LED8, HIGH);
  digitalWrite(LED10, HIGH);
  delay (500);
  digitalWrite(LED2, LOW);
  digitalWrite(LED4, LOW);
  digitalWrite(LED6, LOW);
  digitalWrite(LED8, LOW);
  digitalWrite(LED10, LOW);
  delay (500);
}
