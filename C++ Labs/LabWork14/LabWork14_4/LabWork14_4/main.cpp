//
//  main.cpp
//  LabWork14_4
//
//  Created by Egor Martinovich on 29.11.21.
//

#include <iostream>
#include <time.h>
using namespace std;
int main(int argc, const char * argv[]) {
    srand(time(NULL));
    int n;
    cout<<"Enter n "; cin>>n;
    int Mas[n];
    for (int i = 0; i < n; i++)
    {
        Mas[i]=rand()%10;
        cout<< Mas[i] << " ";
    }
    int max =Mas[0],kolvo=0;
    for (int i = 0; i < n; i++)
    {
        if (Mas[i]>max)
        {
            max=Mas[i];
        }
        
    }
    for (int i = 0; i < n; i++)
    {
        if (Mas[i]==max)
        {
            kolvo++;
        }
        
    }
    cout<<"Максимальное число в массиве встретилось "<<kolvo<<" раз"<<endl;
    return 0;
}
