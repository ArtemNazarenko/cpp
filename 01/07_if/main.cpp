// Условный оператор if
// --------------------
#include <iostream>

//  Replace("MAX_N", "10")
#define MAX_N 10
//  MAX_NN

#define MAX(x,y) (x > y) ? x : y;
#define MIN(x,y) (x < y) ? x : y;
#define MIN2(x,y) (x > y) ? y : x;


using namespace std;

int main() {
  /*
       Многострочный
           комментарий
           */
  // Синтаксис:
  //-->
  if(/*Условие*/ 1 )
    cout << "Если условие истинно!" << endl;
  else
    cout << "Если условие ложно!" << endl;

  int aa[MAX_N];  // int aa[10];
  //<--

  // Всегда ложное условие
  //-->
  if(0) {
    // Сюда мы никогда не попадём
  }

  //<--

  // Всегда истинное условие
  //-->
  if(1) {
    // Сюда мы попадём всегда
  }

  //<--

  int newVar = 1;

  // Определение
#define TEST(x) cout << __FUNCTION__ << ":" << __LINE__ << " " \
                     << #x << " = " << (x) << endl;

  // Использование
  TEST(newVar);

  // Что это значит
  cout << "newVar" << " = " << newVar << endl;

  if(newVar >= 1)
    cout << "A" << endl;
  else
    cout << "B" << endl;

  int myCounter = 1000;
  myCounter++;

  TEST(myCounter);

  // Операции сравнения:
  // -------------------
  // * >= - больше или равно =<
  // * <= - меньше или равно =>
  // * != не равно    a != b - a не равно b
  // * !a - не a
  // * > - больше
  // * < - меньше
  // * && - логическое И      &
  // * || - логическое ИЛИ    |
  //
  //    & - И  |  - ИЛИ  ~  - НЕ  ^ - ИСКЛЮЧ. ИЛИ
  //   000110 - 6
  //   000101 - 5
  // & 000100 - 4
  int a = 6 & 5; // a = 4

  // Var I : Integer = $0BE12;
  // ...
  //   I := $0BE12;

  const int mask = 0b11111110; // 254
  int IP1 =        0b01011100;
  TEST((mask & IP1) == IP1);

  // ИЛИ: Либо один, либо другой, либо оба сразу
  //   000110 - 6
  //   000101 - 5
  // | 000111 - 7

  // ИСКЛЮЧАЮЩЕЕ ИЛИ (XOR): Либо один, либо другой, НО не оба сразу
  //   000110 - 6
  //   000101 - 5
  // ^ 000011 - 3
  // "Не равно"
  int x = -23521, y = 7645674;
  TEST(x)
  int a = x; // Начальное значение x
  TEST(y)
  int b = y; // Начальное значение y
  /* 1 */ x = x ^ y;  // после 1:  x = a ^ b     y = b
  /* 2 */ y = y ^ x;  // после 2:  y = y ^ x = b ^ (a ^ b) = b ^ a ^ b =  b ^ b ^ a = a
  /* 3 */ x = x ^ y;  // после 3:  x = x ^ y = (a ^ b) ^ a = b
  TEST(x)
  TEST(y)

  // a ^= b ^= a ^= b;

  // НЕ - унарная
  //   0 -> 1
  //   1 -> 0
  //   000101 - 5
  // ~ 111010

  TEST(010);
  TEST(10);
  //0xAE43;
  //0324234

#define FORI(x, from, to)  for(int x = from; x <= to; ++x) \
    cout << #x << " = " << x << endl;

  FORI(i, 11, 17);
  FORI(myVar2, 1, 10);

  //  i in [1..3,6]   1,2,3,6
  //                  2,1,3,6
  // Генерация всех подмножеств:
  // { A, B, C } -- A - первое блюдо, B - второе,  C - компот
  // {} - 000
  // {A} - 100, {B} - 010, {C} - 001
  // {A,B} = {B, A} - 110, {B,C} - 011, {A,C} - 101
  // {A,B,C} - 111

  return 0;
}
