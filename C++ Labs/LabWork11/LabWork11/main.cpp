//
//  main.cpp
//  LabWork11
//
//  Created by Egor Martinovich on 15.11.21.
//

#include <iostream>
#include <cmath>
int main(int argc, const char * argv[]) {
    
    using namespace std;
    int array[10]={10,3,4,5,7,1,2,8,9,7};
    int* first=begin(array);
    int* last=end(array);
    int* prev=first;
    int sum=0;
    int temp;
    int j;
    int i;
    float avg=0;
    while(++first != last)
    {
        sum+=*prev++;
    }
    sum+=*prev;
    avg=round(float(sum)/10);
    cout<<avg<<endl;
    for(i=0;i<10;i++){
         if(*(array+i)>avg && i ){
            temp=*(array+i);
            for(j=i;array[j-1]<avg && j;j--)
                array[j]=array[j-1];
            array[j]=temp;
            
            
        }
    }
    for(i=0;i<10;i++){
        printf("%d\n",*(array+i));
    }
  
    
    
}
