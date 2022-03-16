#include <iostream>
using namespace std;
int main(){
    int arr_1[]={1,2,56,34,23,56,14,67}, arr_2[]={56,23,67,12,4,6,3,13,56}, z,sum1=0,sum2=0;
    cout<<"Введите z"; cin>>z;
    int *pz=&z;
    for (int i = 0; i < 8; i++)
    {
        if (*(arr_1+i)<*pz)
        {
            sum1++;
        }
    }
    for (int g = 0; g < 9; g++)
    {
        if (*(arr_2+g)<*pz)
        {
            sum2++;
        }
    }
    if (sum1>sum2)
    {
        cout<<"Первый массив имеет больше элементов, которые меньше числа z. Их оказалось "<<sum1<<endl;
    }
    else{
        cout<<"Второй массив имеет больше элементов, которые меньше числа z. Их оказалось "<<sum2<<endl;
    }
    return 0;
}
