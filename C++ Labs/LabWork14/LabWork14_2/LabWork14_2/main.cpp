//
//  main.cpp
//  LabWork14_2
//
//  Created by Egor Martinovich on 29.11.21.
//

#include <iostream>
#include <time.h>
using namespace std;
int main(int argc, const char * argv[]) {
    srand(time(NULL));
    int n,k;
    cout<<"Enter n"<<endl; cin>>n;
    int Arr[n];
    for (int i = 0; i < n; i++)
    {
        Arr[i]=rand()%10-5;
        cout<<Arr[i]<<" ";
    }
    bool est=false;
    for (int i = 0; i < n; i++)
    {
        if (Arr[i]==0)
        {
            est=true;
            break;
        }
        else{
            est=false;
            continue;
        }
    }
    if (est==true)
    {
        k=Arr[0];
        for (int i = 0; i < n; i++)
        {
            if (Arr[i]==0)
            {
                k=i;
                break;
            }
            
        }
        cout<<"Минимальный элемент равный нулю находится под номером "<<k+1<<endl;
    }
    else{
        cout<<"В массиве не было найдено элементов равных нулю "<<endl;
    }
    return 0;
}
