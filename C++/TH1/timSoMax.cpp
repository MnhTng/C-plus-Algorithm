#include <iostream>
using namespace std;

int main(){
    float a, b, c, d, e;
    cout << "Nhap 5 so thuc : ";
    cin >> a >> b >> c >> d >> e;
    float array[5] = {a,b,c,d,e}; 
    float max = array[0];
    int i, count = 0;
    for(i = 0 ; i < 5 ; i++){
        if(array[i] > max)
            max = array[i];
        else if(array[i] = max)
            count++;    
    }
    (count == 5) ? cout << "Khong co so lon nhat!" << endl : cout << "So lon nhat co gia tri la " << max << endl;
    system("pause");
    return 0;
}