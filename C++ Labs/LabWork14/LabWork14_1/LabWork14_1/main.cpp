#include <iostream>
#include <cstdlib>
#include <time.h>
 
using namespace std;
 
int main()
{
    int n=5,m=5,j=0,i=0;
    int a=0,b=5;
    srand(time(0));
 
    int **mas = new int *[m];
    for (int i = 0; i < m; i++)
    mas[i] = new int [n];
 
    for (int i=0;i<n;i++)
        for (int j=0;j<m;j++)
        {
            mas[i][j]=a+rand()%(b-a);
            //cin>>mas[i][j];
        }
 
    for (int i=0;i<n;i++)
        for (j=0;j<m;j++)
        {
            cout<<mas[i][j]<<" ";
            if (j==n-1)
                cout<<endl;
        }
 
    int *mas1 = new int [m];
    
    for (int i=0;i<m;i++)
        mas1[i]=1;
 
    //int k=0,k1=0;
    for (int i=0;i<n;i++)
        for (j=0;j<m;j++)
        {
            if (mas[i][j]==mas[i][j+1])
                mas1[i]++;
        }
 
    cout<<endl<<endl;
 
    for (i=0;i<m;i++)
        cout<<mas1[i]<<" ";
 
    int max=mas1[0],index=0;
    for (int i=1;i<m;i++)
    {
        if (max<mas1[i])
        {
                max=mas1[i];
                index=i;
        }
    }
    cout<<endl<<"count: "<<max<<endl<<"length: "<<index+1<<endl;
    for(int k=0;k<n;k++){
        delete [] mas[k];
    }
    delete [] mas;
    delete [] mas1;
 
    return 0;
}

