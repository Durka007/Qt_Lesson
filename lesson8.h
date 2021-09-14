#ifndef LESSON8_H
#define LESSON8_H
#include <QTextStream>
#include <QDate>

using namespace Qt;
int lesson8() {
    QTextStream out(stdout);

    QList<QString> months;

       months.append("January");
       months.append("February");
       months.append("March");
       months.append("April");
       months.append("May");
       months.append("June");
       months.append("July");
       months.append("August");
       months.append("September");
       months.append("October");
       months.append("November");
       months.append("December");

       // Создаем объекты с датами
       QDate dt1(2021, 9, 18);
       QDate dt2(2021, 2, 11);
       QDate dt3(2021, 5, 1);
       QDate dt4(2021, 12, 11);
       QDate dt5(2021, 1, 21);

       // С помощью метода daysInMonth() получаем количество дней в месяцах, указанных в объектах с датами
       out << "There are " << dt1.daysInMonth() << " days in "
           << months.at(dt1.month()-1) << endl;
       out << "There are " << dt2.daysInMonth() << " days in "
           << months.at(dt2.month()-1) << endl;
       out << "There are " << dt3.daysInMonth() << " days in "
           << months.at(dt3.month()-1) << endl;
       out << "There are " << dt4.daysInMonth() << " days in "
           << months.at(dt4.month()-1) << endl;
       out << "There are " << dt5.daysInMonth() << " days in "
           << months.at(dt5.month()-1) << endl;

       // С помощью метода daysInYear() получаем количество дней в году, указанном в объекте с датой
       out << "There are " << dt1.daysInYear() << " days in year "
           << QString::number(dt1.year()) << endl;

    return 0;
 }

#endif // LESSON8_H
