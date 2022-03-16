//
//  main.cpp
//  LabWork13_1
//
//  Created by Egor Martinovich on 23.11.21.
//

#include <iostream>
#include <time.h>
#define SIZEI 3
#define SIZEJ 4
int main(int argc, const char * argv[]) {
    using namespace std;
    
    int array[SIZEI][SIZEJ];
    srand(time(NULL));
    for(int i=0;i<SIZEI;i++){
        for(int j=0;j<SIZEJ;j++){
            array[i][j]=rand()%5-3;
        }
    }
    for(int i=0;i<SIZEI;i++){
        for(int j=0;j<SIZEJ;j++){
            printf("%d\t",array[i][j]);
        }
        printf("\n\n");
    }
        for(int i=0;i<SIZEI;i++){
            for(int j=0;j<SIZEJ;j++){
        
    if(array[i][j]>0){
        printf("Положительный элемент в строке %d\n",i+1);
        if(i>0){
            for(j=0;j<SIZEJ;j++){
                array[i-1][j]*=-1;
            }
        }
        continue;
    }
            }
        }
    for(int i=0;i<SIZEI;i++){
        for(int j=0;j<SIZEJ;j++){
            printf("%d\t",array[i][j]);
        }
        printf("\n\n");
    }
    
    return 0;
}
