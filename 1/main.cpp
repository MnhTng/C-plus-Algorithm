#include "statistic.h"

int main(){
    int choose;
    while( 1 ){
        Phuongsai p;
        cout << "Nhap cac so can dung : ";
        cin >> choose;
        switch( choose ){
            case 1:{
                double d1;
                cin >> d1;
                cout << "TRUNG BINH : " << p.trungbinh( d1 ) << endl;
                cout << "DO LECH : " << p.dolech( d1 ) << endl;
                break;
            }
            case 2:{
                double d1, d2;
                cin >> d1 >> d2;
                cout << "TRUNG BINH : " << p.trungbinh( d1, d2 ) << endl;
                cout << "DO LECH : " << p.dolech( d1, d2 ) << endl;
                break;
            }
            case 3:{
                double d1, d2, d3;
                cin >> d1 >> d2 >> d3;
                cout << "TRUNG BINH : " << p.trungbinh( d1, d2, d3 ) << endl;
                cout << "DO LECH : " << p.dolech( d1, d2, d3 ) << endl;
                break;
            }
            case 4:{
                double d1, d2, d3, d4;
                cin >> d1 >> d2 >> d3 >> d4;
                cout << "TRUNG BINH : " << p.trungbinh( d1, d2, d3, d4 ) << endl;
                cout << "DO LECH : " << p.dolech( d1, d2, d3, d4 ) << endl;
                break;
            }
            default:{
                cout << "Ko the thuc hien" << endl;
            }
        }
    }
    system("pause");
    return 0;
}