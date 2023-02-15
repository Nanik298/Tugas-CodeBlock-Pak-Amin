#include <iostream>

using namespace std;

int main()
{
    int a, t, r;
    float LuasSegitiga, LuasLingkaran;
    float phi=3.14;


    cout << "============================" << endl;
    cout << "APLIKASI PENGHITUNG SEGITIGA" << endl;
    cout << "============================" << endl;

    cout << "masukkan Alas;";
    cin >> a;
    cout << "Masukkan Tingi;";
    cin >> t;
    cout<<endl;

    LuasSegitiga =0.5*a*t;
    cout<<"Luas Segitiga = " <<LuasSegitiga<<endl;

    cout << "============================" << endl;
    cout << "APLIKASI PENGHITUNG LINGKARAN" << endl;
    cout << "============================" << endl;

    cout << "masukkan phi;";
    cin >> phi;
    cout << "Masukkan jari2;";
    cin >> r;
    cout<<endl;

    LuasLingkaran=phi *r *r;
    cout<<"Luas Lingkaran = " <<LuasLingkaran<<endl;

    return 0;
}
