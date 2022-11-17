#include <iostream>

using namespace std;

int main (){

    double i, v, r;

    cout << "Rumus Menghitung Arus (I)" << endl;

    cout << "Masukan Tegangan (V) = ";
    cin >> v;

    cout << "Masukan hambatan (R) = ";
    cin >> r;

    cout << endl;

    i = v / r;

    cout << "Arus (I) = " << i << endl;


    return 0;
}
