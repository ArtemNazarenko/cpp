/// Указатели
/// ---------
#include <stdio.h>
#include <stdlib.h>

#define SHOW(x)  printf("%s = %d\n", #x, x);
int main() {
  // Переменные-значения
  int a = 10;
  int b = 23;
  int* p; // Указатель
  p = &a; // p указывает на a
  SHOW(a);
  SHOW(b);
  SHOW(*p);
  SHOW(p);
  (*p)++;
  SHOW(p);
  SHOW(*p);
  SHOW(a);
  // Теперь p указывает на b
  p = &b;
  SHOW(p);
  SHOW(*p);
  SHOW(b);
  b++;
  SHOW(*p);
  SHOW(b);
  (*p)++;
  SHOW(*p);
  SHOW(b);
  int* A;
  A = malloc(10 * sizeof(int));

  for(int i = 0; i < 10; i++)
    A[i] = i + 1;

  free(A);

  return 0;
}
