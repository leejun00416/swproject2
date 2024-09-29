void setup() {
  pinMode(7, OUTPUT);  // LED 핀을 출력 모드로 설정
}

void loop() {
  // 처음 1초 동안 LED 켜기
  digitalWrite(7, HIGH);  // LED ON
  delay(1000);                 // 1초 대기

  // 다음 1초 동안 LED 5회 깜빡이기
  for (int i = 0; i < 5; i++) {
    digitalWrite(7, LOW);   // LED OFF
    delay(100);                  // 100ms 대기
    digitalWrite(7, HIGH);  // LED ON
    delay(100);                  // 100ms 대기
  }

  // LED 끄기
  digitalWrite(7, LOW);  // LED OFF
  
  // 무한 루프
  while(1) {
    // 무한히 반복하여 종료
  }
}
