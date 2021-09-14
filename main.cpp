#include <QTextStream>
#include "lesson2.h"
#include "lesson1.h"
#include "lesson3.h"
#include "lesson4.h"
#include "lesson5.h"
#include "lesson6.h"
#include "lesson7.h"
#include "lesson8.h"
using namespace Qt;

int main()
{
    QTextStream out(stdout);

    out<<endl<< "Lesson 1"<<endl<<endl;
    lesson1();
    out<<endl<< "Lesson 2"<<endl<<endl;
    lesson2();
    out<<endl<< "Lesson 3"<<endl<<endl;
    lesson3();
    out<<endl<< "Lesson 4"<<endl<<endl;
    lesson4();
    out<<endl<< "Lesson 5"<<endl<<endl;
    lesson5();
    out<<endl<< "Lesson 6"<<endl<<endl;
    lesson6();
    out<<endl<< "Lesson 7"<<endl<<endl;
    lesson7();
    out<<endl<< "Lesson 8"<<endl<<endl;
    lesson8();
    return 0;
}
