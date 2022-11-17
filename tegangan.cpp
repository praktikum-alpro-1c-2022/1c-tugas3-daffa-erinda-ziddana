#include <iostream>

using namespace std;

int main(){

    int i, v, r;

    cout << "Rumus Menghitung Tegangan (V)" << endl;

    cout << "Masukan Arus (I) = ";
    cin >> i;

    cout << "Masukan Hambatan (R) = ";
    cin >> r;

    cout << endl;

    v = i * r;

    cout << "Tegangan (V) = " << v << endl;



    return 0;
}
