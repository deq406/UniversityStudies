//
//  main.cpp
//  LabWork13
//
//  Created by Egor Martinovich on 23.11.21.
//

#include <iostream>
#include <time.h>
#define SIZEI 3
#define SIZEJ 3
int main(int argc, const char * argv[]) {
    using namespace std;
    
    int array[SIZEI][SIZEJ];
    //int i,j;
    int temp,sum=0,multi=1;
    srand(time(NULL));
    for(int i=0;i<SIZEI;i++){
        for(int j=0;j<SIZEJ;j++){
            array[i][j]=rand()%24;
        }
    }
    for(int i=0,j;i<SIZEI;i++){
        for(j=0;j<SIZEJ;j++){
            if(array[i][j]%2==0)
            {
                temp=array[i][j]/2;
                if(temp%2==1){
                    sum+=array[i][j];
                    multi*=array[i][j];
                    
                }
            }
        }
    }
    cout<<sum <<" " << multi<<endl;
    
    return 0;
}
