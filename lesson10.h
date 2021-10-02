#ifndef LESSON10_H
#define LESSON10_H
#include <QTextStream>
#include <QList>
using namespace Qt;

int lesson10() {

    QTextStream out(stdout);

    QString string = "coin, book, cup, pencil, clock, bookmark";

    // С помощью метода split() разделяем строку на подстроки
    QStringList items = string.split(",");

    // Это константный итератор в Java-стиле для QStringList
    QStringListIterator it(items);

    // С помощью созданного итератора выводим элементы списка на экран
    while (it.hasNext()) {
        out << it.next().trimmed() << endl; // с помощью метода trimmed() удаляем пробелы из строки
    }
}
#endif // LESSON10_H
