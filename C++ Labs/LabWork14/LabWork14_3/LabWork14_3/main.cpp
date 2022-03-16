//
//  main.cpp
//  LabWork14_3
//
//  Created by Egor Martinovich on 29.11.21.
//

#include <iostream>
#include <time.h>
using namespace std;

int main(int argc, const char * argv[]) {
    int k,sovpad=0;
    srand(time(NULL));
    cout<<"Enter k= "; cin>>k;
    int Arro[4][4];
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            Arro[i][j]=rand()%10;
            cout << Arro[i][j] <<" ";
        }
        cout<<"\n";
    }
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            if (Arro[k][j]==Arro[i][k])
            {
                sovpad++;
                cout<<Arro[k][j]<<" "<<Arro[i][k]<<endl;
                
            }
            
        }
        
    }
    cout<<"Всего в массиве было наденно "<<sovpad<<" совпадений"<<endl;
    return 0;
}
