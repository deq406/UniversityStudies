#include <iostream>
#include <ctime>
using namespace std;

int Dop1_var11_1(){
    srand(time(NULL));
    int size, newlen=0;
    cout<<"Enter size "; cin>>size;
    cout<<endl;
    int Matr[size], newMatr[100];
    for (int i = 0; i < size; i++)
    {
        Matr[i]=rand()%11;
        cout<<Matr[i]<<" ";
        if (Matr[i]%2==0)
        {
            newMatr[newlen]=Matr[i];
            newlen++;
        }
        
    }
    cout<<endl;
    for (int i = 0; i < newlen; i++)
    {
        cout<<newMatr[i]<<" ";
    }
    return 0;
}

int Dop2_var11_2(){
    srand((unsigned int)time(NULL));
    int row,col,sum=0,itog=0;
    cout<<"Enter rows and cols "; cin>>row>>col;
    int Matr[row][col];
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++){
            Matr[i][j]=rand()% 21 - 5;     //инициализация
            cout<<Matr[i][j] << " ";
        }
        cout<<endl;
    }
    bool nol = false;
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            if (Matr[i][j]<0)
            {
                nol=true;
            }
            }
        if (nol==true)
        {
            for (int g = 0; g < col; g++)
            {
                if (Matr[i][g]>0)
                {
                    sum+=Matr[i][g];
                }
                
            }
            
        }
        else{continue;}
        cout<<"sum "<<i<<" sum = "<<sum<<endl;
        itog+=sum;
        sum=0;
    }
    cout<<"Итоговая сумма равна = "<<itog<<endl;
    return 0;
}

int Dop3_var12_1(){
    srand(time(NULL));
    int size,sum=0;
    cout<<"Enter size of array "; cin>>size;
    int Matr[size];
    for (int i = 0; i < size; i++)
    {
        Matr[i]=rand()% 21 - 11;
        cout<<"["<<i<<"]"<<" "<<Matr[i]<<endl;
        if (i%2==0 && i!=0 && Matr[i]<0)
        {
            sum++;
        }
        
    }
    cout<<"Количество = "<< sum <<endl;
    return 0;
}

int main(){
    int choice;
    cout<<"Choice one dop (1,2,3) "; cin>>choice;
    switch (choice)
    {
    case 1:
    Dop1_var11_1();
        break;
    case 2:
    Dop2_var11_2();
        break;
    case 3:
    Dop3_var12_1();
        break;
    
    default:
    cout<<"Выберите другой вариант";
        break;
    }
}
