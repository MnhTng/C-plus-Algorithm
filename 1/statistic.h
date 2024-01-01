#ifndef STATISTIC_H
#define STATISTIC_H

#include <iostream>
#include <cmath>
using namespace std;

// Khai bao ham tinh trung binh
class Phuongsai{
public:
    double d1, d2, d3, d4;
    double trungbinh( double d1 );
    double trungbinh( double d1, double d2 );
    double trungbinh( double d1, double d2, double d3 );
    double trungbinh( double d1, double d2, double d3, double d4 );

// Khai bao ham tinh do lech
    double dolech( double d1 );
    double dolech( double d1, double d2 );
    double dolech( double d1, double d2, double d3 );
    double dolech( double d1, double d2, double d3, double d4 );
};

#endif // STATISTIC_H

