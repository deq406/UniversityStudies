//
//  main.cpp
//  LabWork4_2sem
//
//  Created by Egor Martinovich on 15.02.22.
//

#include <iostream>
#include <string.h>
#include <fstream>
using namespace std;
 struct Pawnshop{
    string firstname;
    string lastname;
    string item_name;
    string price;
    string money_given;
    string delivery_date;
    string shelf_life;
    
 };

int current_size=0;
int choice;
const int size=2;
Pawnshop list_of_goods[size];
Pawnshop bad;
string way="/Users/egormartinovich/Desktop/LabWork4_2sem/Files/db.txt";
void enter_new();
void out();
void del();
void find(string);
void menu();
void filein();
void fileout();
int main() {

    string good;
    setlocale(LC_CTYPE, "Russian");
    menu();
        cin >> choice;
    do{
        switch(choice){
            case 1:enter_new();
                break;
            case 2:del();
                break;
            case 3:out();
                break;
            case 4: cout<<"Введите названия товара";
                cin>>good;
                find(good);
                break;
            case 5:filein();
                break;
            case 6:fileout();
                break;
        }
    }while(choice!=7);
    return 0;
}
void enter_new(){
    cout << "Введите информацию"<< endl;
    if(current_size<size){
        cout << "Строка номер:";
        cout << current_size+1;
        cout << endl<<"Имя"<<endl;
        cin >> list_of_goods[current_size].firstname;
        cout<<"Фамилия"<<endl;
        cin >> list_of_goods[current_size].lastname;
        cout << "Наименование товара"<<endl;
        cin>>list_of_goods[current_size].item_name;
        cout<<"Оценочная цена товара"<<endl;
        cin>>list_of_goods[current_size].price;
        cout<<"Выданные деньги"<<endl;
        cin>> list_of_goods[current_size].money_given;
        cout<<"Дата сдачи"<<endl;
        cin >> list_of_goods[current_size].delivery_date;
        cout <<"Срок хранения"<<endl;
        cin>> list_of_goods[current_size].shelf_life;
        current_size++;
        cout << "----------------------\n";
        
    }
    else{
        cout<<"Введено макс кол-во строк"<<endl;
        cout<<"Что дальше?"<<endl;
        menu();
        cin>>choice;
    }
}
void out(){
    int info;
    int numbstr;
    cout <<"1.Вывод одной строки"<<endl;
    cout <<"2.Вывод всех строк"<<endl;
    cin >> info;
    if(info==1){
        cout <<"Номер выводимой строки"<<endl; cin>>numbstr;cout<<endl;
        cout << endl<<"Имя:";
        cout << list_of_goods[numbstr-1].firstname<<endl;
        cout<<"Фамилия:";
        cout << list_of_goods[numbstr-1].lastname<<endl;
        cout << "Наименование товара:";
        cout<<list_of_goods[numbstr-1].item_name<<endl;
        cout<<"Оценочная цена товара:";
        cout<<list_of_goods[numbstr-1].price<<endl;
        cout<<"Выданные деньги:";
        cout<< list_of_goods[numbstr-1].money_given<<endl;
        cout<<"Дата сдачи:";
        cout << list_of_goods[numbstr-1].delivery_date<<endl;
        cout <<"Срок хранения:";
        cout<< list_of_goods[numbstr-1].shelf_life<<endl;
        cout<<"----------------------\n";
    }
    if(info==2){
        for(int i=0;i<current_size;i++){
            cout<<"Номер строки:"<<i+1;
            cout << endl<<"Имя:";
            cout << list_of_goods[i].firstname<<endl;
            cout<<"Фамилия:";
            cout << list_of_goods[i].lastname<<endl;
            cout << "Наименование товара:";
            cout<<list_of_goods[i].item_name<<endl;
            cout<<"Оценочная цена товара:";
            cout<<list_of_goods[i].price<<endl;
            cout<<"Выданные деньги:";
            cout<< list_of_goods[i].money_given<<endl;
            cout<<"Дата сдачи:";
            cout << list_of_goods[i].delivery_date<<endl;
            cout <<"Срок хранения:";
            cout<< list_of_goods[i].shelf_life<<endl;
            cout<<"----------------------\n";
        }
    }
    cout<<"Что дальше?"<<endl;
    menu();
    cin>>choice;
}
void del(){
    int delstr;
    cout<<"\nНомер строки,которую надо удалить (для удаления всех строк нажать 99"<<endl;
    cin>>delstr;
    if(delstr!=99){
        for(int tempdel=(delstr-1);tempdel<current_size;tempdel++){
            list_of_goods[tempdel]=list_of_goods[tempdel+1];
            }
        current_size=current_size-1;
    
}
    if(delstr==99){
        for(int i=0;i<size;i++){
            list_of_goods[i]=bad;
        }
    }
    cout<<"Что дальше?"<<endl;
    menu();
    cin>>choice;
}
void find(string goodname){
    bool flag=false;
    for(int i=0;i<current_size;i++){
        if(goodname==list_of_goods[i].item_name){
            cout<<"Найденно по запросу:"<<endl;
            cout<<"----------------------\n";
            cout<<"Номер строки:"<<i+1;
            cout << endl<<"Имя"<<endl;
            cout << list_of_goods[i].firstname<<endl;
            cout<<"Фамилия"<<endl;
            cout << list_of_goods[i].lastname<<endl;
            cout << "Наименование товара"<<endl;
            cout<<list_of_goods[i].item_name<<endl;
            cout<<"Оценочная цена товара"<<endl;
            cout<<list_of_goods[i].price<<endl;
            cout<<"Выданные деньги"<<endl;
            cout<< list_of_goods[i].money_given<<endl;
            cout<<"Дата сдачи"<<endl;
            cout << list_of_goods[i].delivery_date<<endl;
            cout <<"Срок хранения"<<endl;
            cout<< list_of_goods[i].shelf_life<<endl;
            flag=true;
        }
    }
    if(!flag)
        cout<<"Ничего не найдено"<<endl;
    cout<<"Что дальше?"<<endl;
    menu();
    cin>>choice;
}
void filein(){
    ofstream fout;
    fout.open(way);
    for(int i=0;i<current_size;i++){
        fout<<endl;
        fout << endl<<"Имя:";
        fout << list_of_goods[i].firstname<<endl;
        fout<<"Фамилия:";
        fout << list_of_goods[i].lastname<<endl;
        fout << "Наименование товара:";
        fout<<list_of_goods[i].item_name<<endl;
        fout<<"Оценочная цена товара:";
        fout<<list_of_goods[i].price<<endl;
        fout<<"Выданные деньги:";
        fout<< list_of_goods[i].money_given<<endl;
        fout<<"Дата сдачи:";
        fout << list_of_goods[i].delivery_date<<endl;
        fout <<"Срок хранения:";
        fout<< list_of_goods[i].shelf_life<<endl;
        fout<<"----------------------\n";
    }
    fout.close();
    cout<<"Что дальше?"<<endl;
    menu();
    cin>>choice;
}
void fileout(){
    ifstream fout;
    fout.open(way);
    string msg;
    while(!fout.eof()){
        msg="";
        getline(fout,msg);
        cout<<msg<<endl;
    }
    fout.close();
    cout<<"Что дальше?"<<endl;
    menu();
    cin>>choice;
}
void menu(){
    cout << "----------------------\n";
    cout << "Введите:" << endl;
    cout << "1-для ввода новой записи" << endl;
    cout << "2-для удаления записей" << endl;
    cout << "3-для вывода записи(ей)" << endl;
    cout << "4-найти товар"<<endl;
    cout << "5-Записать структуру в файл" << endl;
    cout << "6-Получить данные из файла"<<endl;
    cout << "7-для выхода"<<endl;
    cout << "----------------------\n";
}
