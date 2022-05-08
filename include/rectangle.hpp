#include <iostream>
#ifndef __PERSEGIPANJANG_HPP__
#define __PERSEGIPANJANG_HPP__

class PersegiPanjang {
	private:
		float xmax, xmin, ymax, ymin;

	public:
		PersegiPanjang (float panjang, float lebar, float ttx, float tty);

    bool operator== (const PersegiPanjang &)const;
    PersegiPanjang operator+(const PersegiPanjang &);
    PersegiPanjang operator-(const PersegiPanjang &);
    void operator++();
    void operator--();
    void printResult();
};

#endif