

#include <iostream>
using namespace std;
enum origin{
    Stolen,
    Gift,
    Bought
};
struct Library{
    string author;
    string name;
    string izdat;
    string section;
    origin orig;
    string ishere;
};
union NewLib{
    
};
const int size=2;
int current_size=0;
int new_orig;
int newBool;
Library new_lib[size];
void enter_new();
void out();
void del();

int main(){
    int choice;
    
    do{
        cin>>choice;
        switch(choice){
            case 1:
                enter_new();
                break;
            case 2:
                out();
                break;
            case 3:
                del();
                break;
        }
    }while(choice!=0);
}

void enter_new(){
    if(current_size<size){
        cout<<"Строка номер:"<<endl;
        cout<<current_size+1;
        cout << endl<<"Автор"<<endl;
        cin >> new_lib[current_size].author;
        cout<<"Название книги"<<endl;
        cin>> new_lib[current_size].name;
        cout<<"Издательство"<<endl;
        cin >>new_lib[current_size].izdat;
        cout<<"Секция библотеки"<<endl;
        cin>> new_lib[current_size].section;
        cout<<"Происхождение"<<endl;
        cin>>new_orig;
        switch(new_orig){
            case 1:
                new_lib[current_size].orig=Stolen;
                break;
            case 2:
                new_lib[current_size].orig=Gift;
                break;
            case 3:
                new_lib[current_size].orig=Bought;
                break;
                
        }
        cout<<"Присутствие книги"<<endl;
        cin>>new_lib[current_size].ishere;
        current_size++;
        }
    }
void out(){
    for(int i=0;i<current_size;i++){
        cout<<new_lib[i].name<<endl;
        cout<<new_lib[i].section<<endl;
        cout<<new_lib[i].author<<endl;
        cout<<new_lib[i].izdat<<endl;
        switch(new_lib[i].orig){
            case Stolen:
                cout<<"Stolen";
                break;
            case Gift:
                cout<<"Gift";
                break;
            case Bought:
                cout <<"Bought";
                break;
        }
        cout <<endl;
        cout<<new_lib[i].ishere<<endl;
        
    
    }
}
void del(){
    int delstr;
    cout<<"\nНомер строки,которую надо удалить (для удаления всех строк нажать 99"<<endl;
    cin>>delstr;
    if(delstr!=99){
        for(int tempdel=(delstr-1);tempdel<current_size;tempdel++){
            new_lib[tempdel]=new_lib[tempdel+1];
            }
        current_size=current_size-1;
    
 }
}
