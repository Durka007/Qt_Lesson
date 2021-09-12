#ifndef LESSON1_H
#define LESSON1_H
#include <QTextStream>
using namespace Qt;
int lesson1()
{
    QTextStream out(stdout);

    QString a = "love";
    a.append(" chees");
    a.prepend("I ");
    out<< a<<endl;
    out << "The a string has " << a.count() << " characters" <<endl;
    out << a.toUpper() << endl;
    out << a.toLower() << endl;
    std::string s1 = "Hello word.";
    QString str3 = s1.c_str();
    out << str3 << endl;

    // Исходная строка
    QString b = "Eagle";

    // Выводим первый символ строки
    out << b[0] << endl;

    // Выводим пятый символ строки
    out << b[4] << endl;

    // Выводим первый символ строки с помощью метода at()
    out << b.at(0) << endl;

    // Используем маркер %1 для вставки значения
      QString s2 = "There are %1 white roses";

      // Наш маркер будет заменяться этим целочисленным значением
      int n = 12;

      // Выполняем операцию вставки значения
      out << s2.arg(n) << endl;

      // Используем маркер %1 для вставки значения
      QString s3 = "The tree is %1 m high";

      // Наш маркер будет заменяться этим значением типа с плавающей точкой
      double h = 5.65;

      // Выполняем операцию вставки значения
      out << s3.arg(h) << endl;

      // Используем 2 маркера для вставки 2 значений
      QString s4 = "We have %1 lemons and %2 oranges";

      // Наши маркеры будут заменяться следующими значениями
      int ln = 12;
      int on = 4;

      // Выполняем операцию вставки
      out << s4.arg(ln).arg(on) << endl;
    return 0;
}
#endif // LESSON1_H
