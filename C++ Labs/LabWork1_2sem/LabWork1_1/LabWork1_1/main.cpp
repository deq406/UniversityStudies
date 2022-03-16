
#include <iostream>
#include <cmath>
using namespace std;
int func(int num,...)
{
    int count=0;
    int *p=&num;
    for(int i=1;i<=num+1;i++,++p){
        if(*p==0){
            i--;
            continue;
        }
        else
        {
    unsigned x = 0.5 + sqrt(double(*p));
    if(x*x==*p)
        count++;
    }
    }
    return count;
}
        

int main(int argc, char* argv[])
{
    cout<<func(3,4,4,4)<<endl;
    cout<<func(7,25,3,21,25,16,9,49)<<endl;
    cout<<func(11,231,321,421,10,12,13,321,18,25,625,236)<<endl;
    return 0;
}
/*bool is_square(unsigned a)
{
    unsigned x = 0.5 + sqrt(double(a));
    return x*x == a;
}
*/
