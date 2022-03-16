#include <iostream>
#include <fstream>
#include <string>
#include <vector>
using namespace std;

string way = "/Users/egormartinovich/Desktop/LabWork3_2sem/LabWork3_2sem/Files/fin1.txt";
string secondway = "/Users/egormartinovich/Desktop/LabWork3_2sem/LabWork3_2sem/Files/fout2.txt";

void reading()
{    ifstream fin1;
    fin1.open(way);
    string buff;
    string substr="";
    while(!fin1.eof()){
        getline(fin1,buff);
        
    }
    for(int i=0;i<buff.length();i++){
        if(isdigit(buff[i]) || buff[i]=='+' || buff[i]=='-'){
            substr+=buff[i];
        }
    }
   /*for(int i=0;i<substr.length();i++){
        if(substr[i]=='+'){
            substr[i]+='\n';
        }
    }*/
    cout<<substr<<endl;
   /* ofstream fout;
    fout.open(way,fstream::app);
    fout.close();
    ifstream fin;
    fin.open(way);
    if(!fin.is_open())
        cout<<"Файл не открыт";
    else
    {
    string message;
    while(!fin.eof()){
        message="";
        getline(fin,message);
        cout<<message<<endl;
    }
    fin.close();
    }*/
}
void writing(){
    
    vector<string> strings;
    string buffer="";
    ofstream fin1;
    fin1.open(way,fstream::app);
    do{
        getline(cin,buffer);
        if(buffer.size()>0){
            fin1 << buffer;
        }
    }while(buffer!="");
   /* ifstream fin;
    ofstream fout;
    fout.open(secondway,fstream::app);
    fin.open(way);
    if(!fin.is_open()){
        cout<<"Файл не открыт";
    }
    else{
    while(!fin.eof()){
        buffer="";
        getline(fin,buffer);
        strings.push_back(buffer);
    }
        fin.close();
    }
    int i=3;
    unsigned int vector_size = strings.size();
    for(;i<vector_size;i++){
        fout<<strings[i];
        fout<<"\n";
    }
    buffer=strings[i-2];
    cout<<"Кол-во символов в последнем слове:"<<buffer.length()<<endl;
    fout.close();*/
    
    
}
int main()
{
    writing();
    reading();
}
