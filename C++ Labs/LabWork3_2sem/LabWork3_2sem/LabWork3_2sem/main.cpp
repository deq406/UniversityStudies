//
//  main.cpp
//  LabWork3_2sem
//
//  Created by Egor Martinovich on 9.02.22.
//

#include <iostream>
#include <fstream>
#include <string>
#include <vector>
using namespace std;

string way = "/Users/egormartinovich/Desktop/LabWork3_2sem/LabWork3_2sem/Files/file1.txt";
string secondway = "/Users/egormartinovich/Desktop/LabWork3_2sem/LabWork3_2sem/Files/file2.txt";

void reading()
{
   /* ofstream fout;
    fout.open(way,fstream::app);
    fout.close();*/
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
    }
}
void writing(){
    
    vector<string> strings;
    string buffer;
    ifstream fin;
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
    fout.close();
    
    
}
int main()
{
reading();
writing();
    
}
