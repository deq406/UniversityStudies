//
//  main.cpp
//  LabWork13_7dop
//
//  Created by Egor Martinovich on 23.11.21.
//
#include <iostream>
using namespace std;
int main(){
        int Arr[6][5]{      //сумма = 19, max=2;
        1,1,1,1,1,
        0,1,7,1,0,
        0,0,2,0,0,
        0,0,1,0,0,
        0,1,1,1,0,
        1,1,1,1,1
    },sum=0,max=0;
    cout<<"Исходная матрица"<<endl;
    for (int i = 0; i < 6; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            cout<<Arr[i][j]<<" ";
        }
        cout<<"\n";
    }
    for (int i = 0; i < 6; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            if (i==0)
            {
                sum+=Arr[i][j];
                if (Arr[i][j]>max)
                {
                    max=Arr[i][j];
                }
                else{
                    continue;
                }
            }
            if (i==1)
            {
                if (j==0 && j==4)
                {
                    continue;
                }
                else{
                sum+=Arr[i][j];
                }
                if (Arr[i][j]>max)
                {
                    max=Arr[i][j];
                }
                else{
                    continue;
                }
            }
            if (i==2)
            {
                if (j==0 && j==1 && j==3 && j==4)
                {
                    continue;
                }
                else{
                sum+=Arr[i][j];
                }
                if (Arr[i][j]>max)
                {
                    max=Arr[i][j];
                }
                else{
                    continue;
                }
            }
            if (i==3)
            {
                if (j==0 && j==1 && j==3 && j==4)
                {
                    continue;
                }
                else{
                sum+=Arr[i][j];
                }
                if (Arr[i][j]>max)
                {
                    max=Arr[i][j];
                }
                else{
                    continue;
                }
            }
            if (i==4)
            {
                if (j==0 && j==4)
                {
                    continue;
                }
                else{
                sum+=Arr[i][j];
                }
                if (Arr[i][j]>max)
                {
                    max=Arr[i][j];
                }
                else{
                    continue;
                }
            }
            if (i==5)
            {
                sum+=Arr[i][j];
            }
                if (Arr[i][j]>max)
                {
                    max=Arr[i][j];
                }
                else{
                    continue;
                }
        }
    }
    cout<<"sum = "<<sum<<endl;
    cout<<"max = "<<max<<endl;
    return 0;
}
