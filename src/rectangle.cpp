#include <iostream>
#include <cmath>
#include "include/rectangle.hpp"

using namespace std;

PersegiPanjang::PersegiPanjang
(
    float panjang,
    float lebar,
    float ttx,
    float tty
)

{
    this-> xmax = ttx + (panjang / 2);
    this-> xmin = ttx - (panjang / 2);
    this-> ymax = tty + (lebar / 2);
    this-> ymin = tty - (lebar / 2);
}

void PersegiPanjang::printResult()
{
    float panjang = (this->xmax - this->xmin), lebar = (this->ymax - this->ymin), ttx, tty;

    cout << "Panjang : " << (this->xmax - this->xmin) << endl;
    cout << "Lebar : " << (this->ymax - this->ymin) << endl;
    cout << "Titik Tengah X : " << (this-> xmin + (panjang / 2)) << endl;
    cout << "Titik Tengah Y : " << (this-> ymin + (lebar / 2)) << endl;
    cout << "Titik X Maksimum : " << (this-> xmax) << endl;
    cout << "Titik Y Maksimum : " << (this-> ymax) << endl;
}

PersegiPanjang PersegiPanjang :: operator+(const PersegiPanjang& p2){
    PersegiPanjang tambah (0, 0, 0, 0);
    if (*this == p2){
        tambah.xmin = min(this-> xmin, p2.xmin);
        tambah.xmax = max(this-> xmax, p2.xmax);
        tambah.ymin = min(this-> ymin, p2.ymin);
        tambah.ymax = max(this-> ymax, p2.ymax);
    }
    else cout << "Invalid !";
    return tambah;
}

PersegiPanjang PersegiPanjang :: operator-(const PersegiPanjang& p2){
    PersegiPanjang kurang(0, 0, 0, 0);
    if (*this == p2){
        kurang.xmin = min(this-> xmin, p2.xmin);
        kurang.xmax = max(this-> xmax, p2.xmax);
        kurang.ymin = min(this-> ymin, p2.ymin);
        kurang.ymax = max(this-> ymax, p2.ymax);
    }
    else cout << "Invalid !";
    return kurang;
}

void PersegiPanjang :: operator++(){
    float panjang = (this-> xmax - this-> xmin) * 2;
    float lebar = (this-> ymax - this-> ymin) * 2;
    float ttx = (this-> xmax - this-> xmin) / 2;
    float tty = (this-> ymax - this-> ymin) / 2;

    this->xmax = ttx + (panjang / 2);
    this->xmin = ttx - (panjang / 2);
    this->ymax = tty + (lebar / 2);
    this->ymin = tty + (lebar / 2);
}

void PersegiPanjang :: operator--(){
    float panjang = (this-> xmax - this-> xmin) / 2;
    float lebar = (this-> ymax - this-> ymin) / 2;
    float ttx = (this-> xmax - this-> xmin) / 2;
    float tty = (this-> ymax - this-> ymin) / 2;

    this->xmax = ttx + (panjang / 2);
    this->xmin = ttx - (panjang / 2);
    this->ymax = tty + (lebar / 2);
    this->ymin = tty + (lebar / 2);
}

bool PersegiPanjang::operator == (const PersegiPanjang& p2) const
{
    if (this->xmax > p2.xmin && this->xmin < p2.xmax && this->ymin < p2.ymax && this->ymax > p2.ymin)
    return true;

    else if (this->xmin < p2.xmax && this->xmax > p2.xmin && this->ymin > p2.ymax && this->ymax < p2.ymin)
    return true;
    
    else
    return false;
}