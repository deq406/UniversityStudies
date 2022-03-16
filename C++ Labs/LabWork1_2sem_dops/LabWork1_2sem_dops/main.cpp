#include <iostream>
#include <ctime>
#include <string.h>
using namespace std;

void Dop1_var14(){
const int strsize = 60;
{
char text[strsize] = "текст с пробелами";
char * buf = new char[30];
int size = strlen(text), a = 0, b = 0;
for (a = 0; a < size; a++)
{
    if (text[a] == ' ')
        continue;
    else {
        buf[b] = text[a];
        b++; }
    }
    strcpy(text, buf);
    cout << text <<endl;
}
}

int Dop2_var12(){
    int n,kolvo=0;
    cout<<"Enter n "; cin>>n;
    int Matr[n];
    for (int i = 0; i <n ; i++)
    {
        cin>>Matr[i];
        if (Matr[i]<0)
        {
            kolvo++;
        }
    }
    cout<<endl;
    int flag=1;

    while(flag){
    bool flag1=true;
    for (int i = 0; i < n; i++)
    {
 
        if(Matr[i]<Matr[i+1]){
            flag1=false;
            int temp=Matr[i+1];
            Matr[i+1]=Matr[i];
            Matr[i]=temp;
        }
    }
        if(flag1){
            break;
        }
        
  
}
    for(int i=0;i<n;i++){
        if(Matr[i]<0)
            Matr[i]=0;
        cout<<Matr[i]<<" ";
    }
    return 0;
}
int Dop3_var13(){
    srand(time(NULL));
    int row,col,sum1=0,sum2=0,sum=0;
    cout<<"Enter rows and cols "; cin>>row>>col;
    int Matr[row][col];
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            Matr[i][j]=rand()%11;
            cout<<Matr[i][j]<<" ";
        }
        cout<<endl;
    }
    for(int i = 0; i < row; i++) {
    for(int j = 0; j < col; j++) {
        if(i > j) {
            sum1+=Matr[i][j];
        }
    }
}
cout<<"sum1 = "<<sum1<<endl;
int Matr2[row][col];
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            Matr2[i][j]=rand()%11;
            cout<<Matr2[i][j]<<" ";
        }
        cout<<endl;
    }
    for(int i = 0; i < row; i++) {
    for(int j = 0; j < col; j++) {
        if(i > j) {
            sum2+=Matr2[i][j];
        }
    }
}
cout<<"sum2 = "<<sum2<<endl;
sum=sum1+sum2;
cout<<"Sum = "<<sum;
    return 0;
}

int main(){
    int choose;
    cout<<"Choose dop(1,2,3) "; cin>>choose;
    switch (choose)
    {
    case 1:
    Dop1_var14();
        break;
    case 2:
    Dop2_var12();
        break;
    case 3:
    Dop3_var13();
        break;
    
    default:
    cout<<"Что нибудь другое";
        break;
    }
}
