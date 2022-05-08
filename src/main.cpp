#include <iostream>
#include "include/Rectangle.hpp"

using namespace std;

// Reynaldo Ferdinand Wibisono
// 5024211050
// Teknik Komputer
// Pemrograman Lanjut B

int main(){

    float panjang, lebar, ttx, tty;

    cout << "\nPersegi Panjang Pertama : \n";
    cout << "Panjang : ";        cin >> panjang;
    cout << "Lebar : ";          cin >> lebar;
    cout << "Titik Tengah X : "; cin >> ttx;
    cout << "Titik Tengah Y : "; cin >> tty;

    PersegiPanjang Answer1 (panjang, lebar, ttx, tty);
    cout << "\n";

    cout << "Persegi Panjang Kedua : \n";
    cout << "Panjang : ";        cin >> panjang;
    cout << "Lebar : ";          cin >> lebar;
    cout << "Titik Tengah X : "; cin >> ttx;
    cout << "Titik Tengah Y : \n"; cin >> tty;

    PersegiPanjang Answer2 (panjang, lebar, ttx, tty);
    cout << "\n";

    cout << "Persegi Panjang Ke - 1 : " << "\n";
    Answer1.printResult();

    cout << "Persegi Panjang Ke - 2 : \n" << "\n";
    Answer2.printResult();

    PersegiPanjang Answer3 = Answer1 + Answer2;

    cout << "Penambahan Luasan 2 Persegi Panjang yang Beririsan : " << "\n";
    Answer3.printResult();

    PersegiPanjang Answer4 = Answer1 - Answer2;

    cout << "Pengurangan Luasan 2 Persegi Panjang yang Beririsan : \n" << "\n";
    Answer4.printResult();

    cout << "Persegi Panjang 1 : " << "\n";
    Answer1.printResult();
    ++Answer1;

    cout << "Penambahan Luasan Persegi Panjang 1 Menjadi 2 Kali Lipat : " << "\n";
    Answer1.printResult();
    --Answer1;

    cout << "Persegi Panjang 1 : " << "\n";
    --Answer1;

    cout << "Pengurangan Luasan Persegi Panjang 1 Menjadi Setengah Luasan Awal : " << "\n";
    Answer1.printResult();
    ++Answer1;

    cout << "Persegi Panjang 2 : " << "\n";
    --Answer2;

    cout << "Penambahan Luasan Persegi Panjang 2 Menjadi 2 Kali Lipat : " << "\n";
    Answer2.printResult();
    ++Answer2;

    cout << "Persegi Panjang 2 : " << "\n";
    ++Answer2;

    cout << "Pengurangan Luasan Persegi Panjang 2 Menjadi Setengah Luasan Awal : \n" << "\n";
    Answer2.printResult();
    --Answer2;

    if (Answer1 == Answer2)
        cout << "Persegi Panjang Beririsan :)";
    else
        cout << "Persegi Panjang Tidak Beririsan :(";
}