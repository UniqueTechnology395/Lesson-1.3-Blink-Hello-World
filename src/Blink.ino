/* * ----------------------------------------------------------------------------
 * Project: Unique Tech Blink (Basic)
 * Author: Unique Tech Team
 * License: MIT License
 * * Copyright (c) 2026 Unique Tech
 * * Permission is hereby granted, free of charge, to any person obtaining a copy
 * of this software and associated documentation files (the "Software"), to deal
 * in the Software without restriction, including without limitation the rights
 * to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
 * copies of the Software, and to permit persons to whom the Software is
 * furnished to do so, subject to the following conditions:
 * * The above copyright notice and this permission notice shall be included in all
 * copies or substantial portions of the Software.
 * ----------------------------------------------------------------------------
 */

void setup() {
  pinMode(13, OUTPUT); // Προετοιμασία του Pin 13 ως Έξοδο
}

void loop() {
  digitalWrite(13, HIGH); // Άναψε το LED
  delay(1000);            // Περίμενε 1 δευτερόλεπτο
  digitalWrite(13, LOW);  // Σβήσε το LED
  delay(1000);            // Περίμενε 1 δευτερόλεπτο
}
