//
//  main.cpp
//  LabWork1_2sem
//
//  Created by Egor Martinovich on 7.12.21.
//

#include <iostream>
#include <math.h>
#define E 0,001
using namespace std;
float dixitomia(float a,float b);
float dixitomia1(float a,float b);

void callfun(float (*f)(float,float),float a,float b);

int main(int argc, const char * argv[]) {
    float a,b;
    cin>>a;
    cin>>b;
    callfun(dixitomia,a,b);
    callfun(dixitomia1,a,b);
}



float dixitomia(float a,float b)
{
    float x;
    while(abs(a-b)>0.002){
        x=(a+b)/2;
        if((exp(x)-3-(1/x))*(exp(a)-3-(1/a))<=0){
            b=x;
        }
        else
            a=x;
    }
    
    return x;
}
float dixitomia1(float a,float b){
    float x;
    while(abs(a-b)>0.002){
        x=(a+b)/2;
        if((0.2-pow(x,2))*(0.2-pow(a,2))<=0){
            b=x;
        }
        else
            a=x;
    }
    return x;
}
void callfun(float(*f)(float,float),float a,float b){
    cout<<"Корень равен "<<f(a,b)<<endl;
}
