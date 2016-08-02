/// Определение размера константного массива
/// ========================================
#include <iostream>
#include <stdlib.h>

using namespace std;

/// Специальный макрос чтобы показать переменную для отладки
///-->
#define SHOW(x) cout << #x << " = " << (x) << endl;
///<--

/// Определение размера константного массива
/// Делим размер массива в байтах на размер его первого элемента,
/// получаем количество элементов в массиве
///-->
#define SIZE(array) (sizeof(array) / sizeof(array[0]))
///<--

/// В функцию для вывода массива придётся передать его размер явно
///-->
void showArray(int mas[], int size) {
  for(int i = 0; i < size; i++)
    cout << "mas[" << i << "] = " << mas[i] << endl;
}
///<--

int main() {
  /// Создаём константный массив
  ///-->
  int mas[] = {1, 2, 3};
  ///<--
  /// В той же области видимости мы можем определить его размер с помощью макроса SIZE
  ///-->
  for(int i = 0; i < SIZE(mas); i++)
    cout << "mas[" << i << "] = " << mas[i] << endl;
  ///<--
  /// А в функцию размер массива придётся передать в виде параметра:
  ///-->
  showArray(mas, SIZE(mas));
  ///<--

  int n = 9;
  int* p = &n;
  cout << "p = " << *p << endl;
  return 0;
}
