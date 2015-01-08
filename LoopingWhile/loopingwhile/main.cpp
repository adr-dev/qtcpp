#include <QtCore/QCoreApplication>
#include <iostream>



int main(int argc, char *argv[]){

    using namespace std;
    QCoreApplication a(argc, argv);

    int x;
    cout << "Masukkan jumlah pengulangan : ";
    cin >> x;
    cout << "\nNilai x sebelum loop\n" << x << "\n";
    while (x > 0) {
        cout << "Nilai x adalah " << x
             << " dan masih dalam loop" << endl;
        x--;
    }

    cout << "Disini sudah bukan wilayah loop" << endl
         << "Nilai x adalah " << x << endl;
    return a.exec();
}


