//
//  main.cpp
//  LabWork12_1
//
//  Created by Egor Martinovich on 16.11.21.
//

#include <iostream>
#include <string>
 
using namespace std;
 
int main()
{
    setlocale(LC_ALL,"Rus");
    char str[]="something interesting about alphabet";
    char delim[]=" ";
    char *token;
    char *strM[15];
    int i=0;
    token =strtok(str,delim);
    while(token!=NULL) {
        strM[i]=new char[15];
        strcpy(strM[i++],token);
        token=strtok(NULL,delim);
    }
    for (int j=0;j<i;++j)
        cout<<strM[j]<<endl;
    char *temp=new char[15];
    bool b=true;
    while(b){
        b=false;
        for(int j=0;j<i-1;++j)
            if((int)strM[j][0]>(int)strM[j+1][0]){
                strcpy(temp,strM[j]);
                strcpy(strM[j],strM[j+1]);
                strcpy(strM[j+1],temp);
                b=true;
            }
    }
    
    cout<<endl;
    for (int j=0;j<i;++j)
        cout<<strM[j]<<endl;
        return 0;
}
