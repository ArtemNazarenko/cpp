Домашнее задание - рекурсия
---------------------------
ЗАДАНИЕ:
Пользователь вводит натуральное число N. Нужно вывести все способы разложить его на слагаемые.
Способы отличающиеся только порядком слагаемых считаются одинаковыми.
-----------------------
Например N = 4:
4 = 4
4 = 3 + 1
4 = 2 + 2
4 = 2 + 1 + 1
4 = 1 + 1 + 1 + 1
Цифры
N - число для разложения
m - максимальное слагаемое в сумме
K - количество цифр
Окончание рекурсии
x - текущее слагаемое
Сумма уменьшилась на x
Максимальное слагаемое - x
Вводим число N
Цифры
new int[N]; - возвращает указатель на int
Вывод разложения на слагаемые
A = new type[SIZE]    delete[] A  -- создание и удаление массива
в динамической памяти
A = new type;  delete A; -- создание и удаление одиночного
объекта
[main.cpp](main.cpp)
