/*
Chuyen tu tien to --> hau to :
    Dao nguoc chuoi tien to
    Neu gap toan tu --> thuc hien phep toan theo kieu hau to roi day vao stack
    Neu khong phai toan tu --> day vao stack
*/

#include <bits/stdc++.h>
using namespace std;

void hau_to( string s ){
    stack<string> st;
    
    for( char c : s ){
        if( c >= 'a' && c <= 'z' ){
            string temp = "";
            temp += c;
            st.push( temp );
        }
        else{
            string temp = "";
            int index = 0;

            while( !st.empty() && index < 2 ){
                temp += st.top();
                st.pop();
                index++;
            }

            temp += c;
            st.push( temp );
        }
    }

    while( !st.empty() ){
        cout << st.top();
        st.pop();
    }

    cout << endl;
}

int main(){
    int t;
    cin >> t;
    while( t-- ){
        string s;
        cin >> s;
        reverse( s.begin(), s.end() );

        hau_to( s );
    }
    system("pause");
    return 0;
}