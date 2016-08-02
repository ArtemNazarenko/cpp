/// Константы в if ставятся на первое место (до =)
/// Это защищает от ошибки когда вы можете написать
/// присваивание = вместо сравнения ==
#include <iostream>

using namespace std;

///-->
const int a = 0;

int main() {
  int b = 0;

  if(a == b)
    cout << "a = b" << endl;
  else
    cout << "a != b" << endl;

  return 0;
}
///<--
