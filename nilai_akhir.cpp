#include <iostream>

using namespace std;

int main(){

    double nilai_akhir, praktikum = 75, uts = 70, uas = 88;

    cout << "Nilai Praktikum = " << praktikum << endl;
    cout << "Nilai Uts = " << uts << endl;
    cout << "Nilai Uas = " << uas << endl;
    cout << endl;

    nilai_akhir = (praktikum * 0.2) + (uts * 0.3) + (uas * 0.5);

    cout << "Nilai Akhir = " << nilai_akhir << endl;



    return 0;
}
