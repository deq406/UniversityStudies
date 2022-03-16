//
//  main.cpp
//  LabWork11_1
//
//  Created by Egor Martinovich on 15.11.21.
//


#include <iostream>
#include <cmath>
#include <ctime>
#define SIZE 10
int main(int argc, const char * argv[]) {
    using namespace std;
    srand(time(NULL));
    int x[SIZE];
    int y[SIZE];
    int count=0;
    for(int i=0;i<SIZE;i++){
        *(x+i)=rand()%21+1;
        cout<<*(x+i)<< " ";
    }
    cout<<endl;
    for(int i=0;i<SIZE;i++){
        *(y+i)=rand()%21+1;
        cout<<*(y+i) << " ";
    }
    for(int i=0;i<SIZE;i++){
        for(int j=0;j<SIZE;j++){
            if(*(x+i)==*(y+j)){
                count++;
            }
        }
    }
    cout<<endl;
    cout<<"Кол-во пар элементов="<< count << endl;
    return 0;
}
