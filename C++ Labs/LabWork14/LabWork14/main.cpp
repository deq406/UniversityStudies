//
//  main.cpp
//  LabWork14
//
//  Created by Egor Martinovich on 29.11.21.
//

#include <iostream>
#include <time.h>
#include <stdio.h>
#include<stdlib.h>

int main(int argc, const char * argv[]) {
    using namespace std;
    srand(time(NULL));
    int SIZE;
    printf("Введите размер массива");
    cin>>SIZE;
    float *ptr;
    int count=0;
    int countmin=0;
    if(!(ptr=(float*)malloc(SIZE*sizeof(float)))){
        puts("Not enough memory");
    }
    for(int i=0;i<SIZE;i++){
        *(ptr+i)=(float)(rand()%20-10);
        printf("%4.2f\t",*(ptr+i));
    }
    
    printf("\n");
    float min=*(ptr+1);
    for(int i=0;i<SIZE;i++){
        if(*(ptr+i)==0.00){
            count++;
        }
        min>*(ptr+i) ? min=*(ptr+i):false;
        
    }
    for(int i=0;i<SIZE;i++){
        if(*(ptr+i)==min){
            for(int j=i+1;j<SIZE;j++){
                countmin+= *(ptr+j);
                
            }
            
        }
    }
    free(ptr);
    printf("Кол-во элементов равных 0:%d\n",count);
    printf("Сумма элементов после минимального:%d\n",countmin);
}
