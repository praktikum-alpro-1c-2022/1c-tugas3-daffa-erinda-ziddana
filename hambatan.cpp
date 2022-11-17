#include <iostream>

using namespace std;

int main(){

    double i, v, r;

    cout << "Masukan Tegangan (V) = ";
    cin >> v;

    cout << "Masukan Arus (I) = ";
    cin >> r;

    cout << endl;

    r = v/r;

    cout << "Hambatan (R) = " << r << endl;



    return 0;
}
