/// Задание: работа с базой данных
/// ------------------------------
#include <QCoreApplication>
#include <QSql>

int main(int argc, char* argv[]) {
  // 0. Создаём БД для работы нашего приложения
  // 1. Подключаем драйвер нужной БД

  // 2. Подкчаемся к самой БД
  // 3. Выполняем SQL-операторы
  // 4. Получаем результаты их выполнения
  // 5. Связываем с интерфейсом

  QCoreApplication a(argc, argv);

  return a.exec();
}
