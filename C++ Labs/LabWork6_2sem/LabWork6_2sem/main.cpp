//
//  main.cpp
//  LabWork6_2sem
//
//  Created by Egor Martinovich on 15.03.22.
//

#include <iostream>

using namespace std;
struct NumbList{
    int info;
    NumbList * next;
};
void print(NumbList *p);
void insert(NumbList *p,int value);
void Menu();
int main(int argc, const char * argv[]) {
    NumbList* plist=nullptr;
    NumbList* p = NULL;
    Menu();
    int choice;
    do{
        cin>>choice;
    switch(choice){
        case 1:
            int value;
            cin >> value;
            insert(p,value);
            break;
        case 2:
            print(p);
            break;
    }

    }while(choice!=0);
    return 0;
}
/*void insert(NumbList *&p){
    int number;
     
    NumbList* newP;
    
    for(;;){
        cout<<"Input number"<<endl;
        cin>> number;
        if(!number)
            break;
        newP = new NumbList;
        newP->info = number;
        newP->next = p;
        p=newP;
        
}
}*/
void print(NumbList *p){
    if(p==NULL){
        cout<<"Список пуст"<<endl;
    }
    else{
        cout<<"Список:"<<endl;
        while(p){
            cout<<p->info<<endl;
            p= p->next;
        }

    }
}
void Menu(){
    cout<<"(1)Заполнить список"<<endl
        <<"(2)Вывести список"<<endl;
}

void insert(NumbList *&p, int value) //Добавление символа в начало списка
{
    NumbList *newP = new NumbList;
   if (newP!= NULL)     //есть ли место?
   {    newP->info = value;
        newP->next = p;
        p = newP;
   }
   else
        cout<<"Операция добавления не выполнена"<<endl;
}
  
