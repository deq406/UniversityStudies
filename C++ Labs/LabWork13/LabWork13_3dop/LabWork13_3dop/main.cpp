//
//  main.cpp
//  LabWork13_3dop
//
//  Created by Egor Martinovich on 23.11.21.
//

#include <iostream>
#include <iomanip>
 
int main()
{
    const int n=3;
    
    float** arr = new float* [n];
    float max;
    int i_max, j_max;
    for (int i = 0; i < n; ++i)
    {
        arr[i] = new float [n];
        for (int j = 0; j < n; ++j)
        {
            std::cin >> arr[i][j];
            if (((!i) && (!j)) || (arr[i][j] > max))
            {
                max = arr[i][j];
                i_max = i;
                j_max = j;
            }
        }
    }
    arr[i_max][j_max] = arr[0][0];
    arr[0][0] = max;
    for (int count = 1; count < n; ++count)
    {
        max = arr[0][1];
        for (int i = 0; i < n; ++i)
            for (int j = 0; j < n; ++j)
                if (((i != j) || ((i >= count) && (j >= count))) && (arr[i][j] > m3ax))
                {
                    max = arr[i][j];
                    i_max = i;
                    j_max = j;
                }
        arr[i_max][j_max] = arr[count][count];
        arr[count][count] = max;
    }
    for (int i = 0; i < n; ++i)
    {
            for (int j = 0; j < n; ++j)
                std::cout << std::setw(5) << arr[i][j];
            std::cout << std::endl;
    }
}
/*#include <iostream>
#include <time.h>
#define SIZE 3
int main(int argc, const char * argv[]) {
    srand(time(NULL));
    int matrix[SIZE][SIZE];
    int row=0,col=0;
    
    int temp;
    for(int i=0;i<SIZE;i++){
        for(int j=0;j<SIZE;j++){
            matrix[i][j]=rand()%24;
            printf("%d\t",matrix[i][j]);
        }
        printf("\n\n");
        
    }
    for(int n=0;n<SIZE;n++){
    for(int i=0;i<SIZE;i++){
        for(int j=0;j<SIZE;j++){
            int max=0;
            if(i!=j || i>n){
                if(matrix[i][j]>max){
                    max=matrix[i][j];
                    row=i;col=j;
                }
            }
        }
    }
        temp=matrix[n][n];
        matrix[n][n]=matrix[row][col];
        matrix[row][col]=temp;
        
}
    for(int i=0;i<SIZE;i++){
        for(int j=0;j<SIZE;j++){
            printf("%d\t",matrix[i][j]);
        }
        printf("\n\n");
        
    }
}*/
