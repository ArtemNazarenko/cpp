/// Утверждения в C/C++
/// ===================
///
/// Утверждения - один из способов отладки
/// Если я в чём-то уверен в процессе написания кода
/// Код работает, но результат != ожидаемому
/// Одна из стратегий:
///   добавить проверки по ходу выполнения кода
/// Эти проверки приведут к останову программы
/// если будут обнаружены некорректные данные
#include <iostream>
#include <assert.h>

using namespace std;

// "\n\\"
#define ASSERT(e, msg) \
  if(!(e)){ \
    _assert(#e"  Message:  "msg,__FILE__,__LINE__); \
  }


// Функция деления
int myDiv(int n, int d) {
  // Я уверен, что когда эту функцию вызывают
  // d не должен быть равен 0
  assert(d != 0); // Утверждение, которое будет проверятся каждый раз при вызове функции
  // "Мёртвые программы не лгут"
  ASSERT(d != 1, "Test");
}

long long fact(int n) {
  // Проверка корректности передаваемых аргументов
  assert(n >= 1);
  if(n >= 3) {
    long long res = n * fact(n - 1);
    assert(res > 0);
    return res;
  }
  return n;
}

int main() {
  //myDiv(3, 1);
  //fact(-1);
  assert( fact(1) == 1 );
  assert( fact(2) == 2 );
  assert( fact(3) == 1 * 2 * 3 );
  assert( fact(4) == 1 * 2 * 3 * 4 );
  assert( fact(5) == 1 * 2 * 3 * 4 * 5 );
  //fact(0);
  for(int i = 1; i < 20; i++)
    cout << i << "! = " << fact(i) << endl;

  return 0;
}
