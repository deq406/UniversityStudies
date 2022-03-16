//
//  main.cpp
//  LabWork12
//
//  Created by Egor Martinovich on 16.11.21.
//

#include <cstdlib>
#include <iostream>
#include <string>
 
int main(int argc,char *argv[])
{
 
char bes[200];
 
int i;
printf ("ввести строку символов:");
gets(bes);
    int k,s1 = 0,s2=0;
k=strlen(bes);
    for (int i=0;i<k;i++){
 
if (bes[i]=='(')
{
 s1=i;
    break;
    
}
    }
 
    for (int i=0;i<k;i++){
 if (bes[i]==')')
 {
    s2=i;
     break;
     
 }
    }
char *buf = new char [strlen(bes)+1-s2+s1];
  
  for (i=0;i<s1;i++)
  { buf[i]=bes[i];}
  
   for (i=s2;i<k+1;i++)
  { buf[i]=bes[i];}
  
puts(buf);
    return 0;
 }



/*#include <iostream>
#include <stdio.h>
#include <algorithm>
#include <string.h>
int main(int argc, const char * argv[]) {
    using namespace std;
    char str[256];
    int counteri,counterj;
    printf("Enter string");
    gets(str);
    unsigned long temp = strlen(str);
    for(counteri=0;counteri<strlen(str);counteri++){
        if (str[counteri]=='('){
            for(counterj=counteri;counterj<strlen(str);counterj++){
                if(str[counterj]==')'){
                    
                }
            }
        }
    }
    
    return 0;
    
}*/
