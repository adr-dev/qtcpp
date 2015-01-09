#include <QtCore/QCoreApplication>
#include <iostream>

int main(int argc, char *argv[]){
    using namespace std;
    QCoreApplication a(argc, argv);
    int i = 1;

    while (true) {
        cout << "ini looping ke = "<<i<<endl;
        i++;
        if (i == 1000) {
            cout << "berakhir di sini\n";
            break;
        }
    }

    cout << "di luar loop\n";
    return a.exec();
}
