#include <iostream>
using namespace std;
int main(){
    int k,x,y,m=0;
    cout<<"Длина последовательности"; cin>>k, k--;
    cout<<"Введите последовательность "; cin>>x;
        int *p=&x;
        while (k--){
        cin >> y;
        if (y - *p > 1 && !m)
            m = *p + 1;
        *p = y;
    }
    cout << m<<endl;
    return 0;
}

