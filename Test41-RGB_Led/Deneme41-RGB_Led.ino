const int kled = 11;
const int yled = 10;
const int mled = 9;

void KSon() {
  for (int m = 255; m >= 0; m -= 10) {
    analogWrite(kled, m);
    delay(30);
  }
  analogWrite(kled, 0);
  delay(100);
}
void KYak() {
  for (int i = 0; i <= 255; i += 10) {
    analogWrite(kled, i);
    delay(30);
  }
}

void YYak() {
  for (int k = 0; k <= 255; k += 10) {
    analogWrite(yled, k);
    delay(30);
  }
}
void YSon() {
  for (int j = 255; j >= 0; j -= 10) {
    analogWrite(yled, j);
    delay(30);
  }
  analogWrite(yled, 0);
  delay(100);
}

void MYak() {
  for (int a = 0; a <= 255; a += 10) {
    analogWrite(mled, a);
    delay(30);
  }
}
void MSon() {
  for (int b = 255; b >= 0; b -= 10) {
    analogWrite(mled, b);
    delay(30);
  }
  analogWrite(mled, 0);
  delay(100);
}

void SYak() {
  for (int x = 0; x <= 255; x += 10) {
    analogWrite(kled, x);
    analogWrite(yled, x);
    delay(30);
  }
}
void SSon() {
  for (int l = 255; l >= 0; l -= 10) {
    analogWrite(kled, l);
    analogWrite(yled, l);
    delay(30);
  }
  analogWrite(kled, 0);
  analogWrite(yled, 0);
  delay(100);
}

void TYak() {
  for (int h = 0; h <= 255; h += 10) {
    analogWrite(yled, h);
    analogWrite(mled, h);
    delay(30);
  }
}
void TSon() {
  for (int g = 255; g >= 0; g -= 10) {
    analogWrite(yled, g);
    analogWrite(mled, g);
    delay(30);
  }
  analogWrite(yled, 0);
  analogWrite(mled, 0);
  delay(100);
}

void BYak() {
  for (int d = 0; d <= 255; d += 10) {
    analogWrite(yled, d);
    analogWrite(mled, d);
    analogWrite(kled, d);
    delay(30);
  }
}
void BSon() {
  for (int e = 255; e >= 0; e -= 10) {
    analogWrite(yled, e);
    analogWrite(mled, e);
    analogWrite(kled, e);
    delay(30);
  }
  analogWrite(yled, 0);
  analogWrite(mled, 0);
  analogWrite(kled, 0);
  delay(100);
}

void setup() {
  // put your setup code here, to run once:
  pinMode(kled, OUTPUT);
  pinMode(yled, OUTPUT);
  pinMode(mled, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  KYak();
  KSon();
  YYak();
  YSon();
  MYak();
  MSon();
  SYak();
  SSon();
  TYak();
  YSon();
  BYak();
  BSon();
}
