#include "statistic.h"
// #include <cmath>
// Dinh nghia thu vien statistic

// Dinh nghia ham tinh trung binh

double trungbinh( double d1 ){
    return d1;
}
double trungbinh( double d1, double d2 ){
    return 1.0 * ( d1 + d2 ) / 2;
}
double trungbinh( double d1, double d2, double d3 ){
    return 1.0 * ( d1 + d2 + d3 ) / 3;
}
double trungbinh( double d1, double d2, double d3, double d4 ){
    return 1.0 * ( d1 + d2 + d3 + d4 ) / 4;
}

// Dinh nghia ham tinh do lech
double dolech( double d1 ){
    double temp = trungbinh( d1 );
    return sqrt( ( pow( d1 - temp, 2 ) ) );
}
double dolech( double d1, double d2 ){
    double temp = trungbinh( d1, d2 );
    return sqrt( ( pow( d1 - temp, 2 ) + pow( d2 - temp, 2 ) ) / 2 );
}
double dolech( double d1, double d2, double d3 ){
    double temp = trungbinh( d1, d2, d3 );
    return sqrt( ( pow( d1 - temp, 2 ) + pow( d2 - temp, 2 ) + pow( d3 - temp, 2 ) ) / 3 );
}
double dolech( double d1, double d2, double d3, double d4 ){
    double temp = trungbinh( d1, d2, d3, d4 );
    return sqrt( ( pow( d1 - temp, 2 ) + pow( d2 - temp, 2 ) + pow( d3 - temp, 2 ) + pow( d4 - temp, 2) ) / 4 );
}
