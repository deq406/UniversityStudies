//
//  main.cpp
//  LabWork15
//
//  Created by Egor Martinovich on 30.11.21.
//

#include <iostream>
#include <time.h>
#include <stdio.h>
#include <string.h>
void matrix();
void ClearScreen();
void stringWork();
using namespace std;
int main(int argc, const char * argv[]) {
    int choice;
    do{
        cout<<"1.Работа с многомерным массивом"<<endl;
        cout<<"2.Работа со строками"<<endl;
        cout<<"3.Выход"<<endl;
        cin>>choice;
        switch (choice) {
            case 1: ClearScreen();
                matrix();
                break;
            case 2:stringWork();
                break;
            case 3:break;
                
            default:
                cout<<"Выберите пожалуйста правильный вариант"<<endl;
                break;
        }
    }while(choice!=3);
    return 0;
    
}



void matrix()
{
    srand(time(NULL));
    int **A,row,column,i,j,*ptr;
    int max=0;
   
    cout <<"Введите кол-во строк матрицы";
    cin>>row;
    if(!(ptr=(int*)malloc(row*sizeof(int)))){
        puts("Not enough memory");
    }
    cout<<"Введите кол-во столбцов матрицы";
    cin>>column;
    A=new int*[row];
    for(i=0;i<row;i++)
        A[i]=new int[column];
    for(i=0;i<row;++i){
        for(j=0;j<column;++j){
            *(*(A+i)+j)=rand()%10;
            cout<<*(*(A+i)+j)<<" ";
            
        }
        cout<<"\n";
    }
    for(i=0;i<row;++i){
        int min=*(*(A+i)+0);
        for(j=1;j<column;++j){
            if(*(*(A+i)+j)<min){
                min=A[i][j];
            }
        }
        cout<<"Минимальное значение в строке "<<i+1<<" равно:"<< min<<endl;
        *(ptr+i)=min;
    }
    for(i=0;i<row;i++){
        (max<*(ptr+i)) ? max=*(ptr+i): false;
    }
    
    int positon;
    for(i=0;i<row;++i){
        for(j=1;j<column;++j){
            if(*(*(A+i)+j)==max){
                positon=i;
            }
        }
        
    }
    cout <<"Максимальное среди минимальных:"<< max <<" находится в "<<positon+1 <<" cтроке"<< endl;
    
    for(int k=0;k<row;k++){
        delete A[k];
    }
    delete A;
    free(ptr);

}
void ClearScreen()
   {
   cout << string( 100, '\n' );
   }

void stringWork()
{
    string stroka;
    int counter = 0;
    char bukva;
    
    cout << "vvedite tekst: ";
    cin >> stroka;
    cout << "vvedite bukvu: ";
    cin >> bukva;
    
    for (unsigned int i = 0; i < stroka.length(); i++)
        if (stroka[i] == bukva)
            counter++;
    cout << "v tekste " << counter << " <" << bukva << "> " <<endl;
}



