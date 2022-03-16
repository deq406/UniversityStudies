#include <iostream>
using namespace std;
int main(){
    int arr_A[]={1,2,12,23,25,27,34,42,54,65,76,87,97,120},k,arr_ravn[14],arr_bolsh[14],arr_mensh[14];
    cout<<"Enter k "; cin>>k;
    int *pk=&k;
    for (int i = 0; i < 14; i++)
    {
        if (arr_A[i]>*pk)
        {
            arr_bolsh[i]=i;
            cout<<"Элемент больше k = ["<<i<<"]"<<endl;
        }
        if (arr_A[i]<*pk)
        {
            arr_mensh[i]=i;
            cout<<"Элемент меньше k = ["<<i<<"]"<<endl;
        }
        if (arr_A[i]==*pk)
        {
            arr_ravn[i]=i;
            cout<<"Элемент равный k =["<<i<<"]"<<endl;
        }
    }
    return 0;
}

