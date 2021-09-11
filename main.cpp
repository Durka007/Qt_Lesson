#include <QTextStream>
using namespace Qt;

int main()
{
    QTextStream out(stdout);

    QString a = "love";
    a.append(" chees");
    a.prepend("I ");
    out<< a<<endl;
    out << "The a string has " << a.count() << " characters" <<endl;
    out << a.toUpper() << endl;
    out << a.toLower() << endl;// hi git
    return 0;
}
