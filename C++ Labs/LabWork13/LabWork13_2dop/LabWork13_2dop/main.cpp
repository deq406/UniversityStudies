//
//  main.cpp
//  LabWork13_2dop
//
//  Created by Egor Martinovich on 23.11.21.
//

#include <iostream>
using namespace std;
 
int main()
{
    int n;
    cin>>n;
    int sq[n][n];
    for (int i=0; i<n; i++)//заполнение массива с заданным свойством
    {
        int a=i+1;
        for (int j=0; j<n; j++)
        {
            sq[i][j]=a;
            a++;
            if (a>n) a=1;
        }
    }
    for (int i=0; i<n; i++)//вывод
    {
            for (int j=0; j<n; j++)
                   cout<<sq[i][j]<<' ';
            cout<<endl;
    }
    return 0;
}
