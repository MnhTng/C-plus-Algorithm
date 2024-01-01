#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while( t-- ){
        int n;
        cin >> n;
        stack<char> operate;
        stack<long> operant;
        int check = 1;

        for( int i = n; i >= 1; i-- ){
            operant.push( i );

            if( i != 1 ){
                if( check % 4 == 1 )
                    operate.push( '*' );
                else if( check % 4 == 2 ){
                    long ope1 = operant.top();
                    operant.pop();
                    long ope2 = operant.top();
                    operant.pop();

                    operant.push( ope1 * ope2 );
                    operate.pop();
                    operate.push( '/' );
                }
                else if( check % 4 == 3 ){
                    long ope1 = operant.top();
                    operant.pop();
                    long ope2 = operant.top();
                    operant.pop();

                    operant.push( ope2 / ope1 );
                    operate.pop();
                    operate.push( '+' );
                }
                else
                    operate.push( '-' );
            }

            check++;
        }

        if( !operate.empty() && ( operate.top() == '*' || operate.top() == '/' ) ){
            operant.pop();
            operate.pop();
        }

        vector<long> toan_hang;
        stack<char> toan_tu;

        while( !operant.empty() ){
            toan_hang.push_back( operant.top() );
            operant.pop();
        }

        while( !operate.empty() ){
            toan_tu.push( operate.top() );
            operate.pop();
        }

        while( !toan_tu.empty() ){
            if( toan_tu.top() == '+' ){
                long kq = toan_hang[toan_hang.size() - 1] + toan_hang[toan_hang.size() - 2];
                toan_hang.pop_back();
                toan_hang.pop_back();
                toan_hang.push_back( kq );
            }
            else if( toan_tu.top() == '-' ){
                long kq = toan_hang[toan_hang.size() - 1] - toan_hang[toan_hang.size() - 2];
                toan_hang.pop_back();
                toan_hang.pop_back();
                toan_hang.push_back( kq );
            }

            toan_tu.pop();
        }
 
        cout << toan_hang[toan_hang.size() - 1] << endl;
    }
    system("pause");
    return 0;
}