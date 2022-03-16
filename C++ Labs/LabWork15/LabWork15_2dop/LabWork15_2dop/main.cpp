//
//  main.cpp
//  LabWork15_2dop
//
//  Created by Egor Martinovich on 13.12.21.
//

#include <iostream>
#include <string.h>
#include <cstring>
using namespace std;
int main(int argc, const char * argv[]) {
    string stroka;
    cout<<"Введите предложение ";
    cin>>stroka;
    cout<<stroka<<endl;
   
    for (int i = 0; i < stroka.length(); i++)
    {
        if (stroka[i]=='c')
        {
            stroka+='*';
        }
        else if (stroka[i]=='\0')
        {
            break;
        }
    }
    cout<<stroka;
    return 0;
}
