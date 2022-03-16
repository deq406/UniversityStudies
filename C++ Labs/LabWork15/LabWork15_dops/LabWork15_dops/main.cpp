#include <iostream>
#include <ctime>
#include <cstring>
#include <string>
using namespace std;
int dopZadanie1_Var11_1(){
    srand(time(NULL));
    int n,m;
    cout<<"Число строк = "; cin>>n;
    cout<<"Число столбцов = "; cin>>m;
    int matr[n][m];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            matr[i][j]=rand()%11;
            cout<<matr[i][j]<<" ";
        }
        cout<<endl;
    }
    int max=0,nomer[2];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (matr[i][j]>max)
            {
                max=matr[i][j];
                nomer[0]=i;
                nomer[1]=j;
            }
            
        }
    }
    cout<<endl;
    cout<<"Максимальный элемент = "<<max<<". Позиция = "<<nomer[0]<<" "<<nomer[1]<<endl;
    int sum=0,diagonal=1;
    for (int i = 1; i < n; i++)
    {
        for (int j = 0; j <diagonal; j++)
        {
            sum+=matr[i][j];
        }
        diagonal++;
    }
    cout<<"Сумма под главной дигональю = "<<sum<<endl;
    return 0;
}

int dopZadanie2_Var11_2(){
    char stroka[50];
    cout<<"Введите предложение ";
    cin>>stroka;
   
    for (int i = 0; i < strlen(stroka); i++)
    {
        if (stroka[i]=='c')
        {
            stroka[i+1]='*';
        }
        else if (stroka[i]=='\0')
        {
            break;
        }
    }
    cout<<stroka;
    return 0;
}

int dopZadanie3_Var7_1(){
    int n,m,d;
    cout<<"Количество строк = ";    cin>>n;
    cout<<"Количество столбцов = ";    cin>>m;
    cout<<"Введите число d = "; cin>>d;
    int matr[n][m];
    srand(time(NULL));
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            matr[i][j]=rand()%11;
            cout<<matr[i][j]<<" ";
        }
        cout<<endl;
    }
    bool proverka = false;
        for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (matr[i][j]==d)
            {
                proverka=true;
                cout<<"Строка = "<<i;
                break;
            }
        }
        if (proverka==true)
        {
            break;
        }
    }
    return 0;
}

int main(){
    int choice;
    cout<<"Выберите доп задание(1,2,3) ";  cin>>choice;
    switch (choice)
    {
    case 1:
        dopZadanie1_Var11_1();
        break;
    case 2:
        dopZadanie2_Var11_2();
        break;
    case 3:
        dopZadanie3_Var7_1();
        break;
    default:
        cout<<"Введите другое значение";
        break;
    }
    return 0;
}
