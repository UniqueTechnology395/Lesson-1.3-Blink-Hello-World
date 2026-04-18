// Μάθημα 1.3 - Unique Tech Blink
void setup() {
  pinMode(13, OUTPUT); // Προετοιμασία του Pin 13 ως Έξοδο
}

void loop() {
  digitalWrite(13, HIGH); // Άναψε το LED
  delay(1000);            // Περίμενε 1 δευτερόλεπτο
  digitalWrite(13, LOW);  // Σβήσε το LED
  delay(1000);            // Περίμενε 1 δευτερόλεπτο
}
