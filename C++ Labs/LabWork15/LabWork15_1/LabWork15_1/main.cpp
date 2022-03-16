//
//  main.cpp
//  LabWork15_1
//
//  Created by Egor Martinovich on 30.11.21.
//

#include <iostream>
#include <string.h>
int main(int argc, const char * argv[]) {
using namespace std;
 

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
    return 0;
    
}
