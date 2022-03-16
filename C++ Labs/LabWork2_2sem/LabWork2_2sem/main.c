#include <stdio.h>
#include <stdlib.h>


int main()
{
   

    char a[50];
    char s[50];
 
    int i,x;
    FILE *f1;
  f1 = fopen("f1.txt","wt");
    if (!f1)
    {
        printf( "Error!");
        return 0;
    }
    printf ("Введите количество строк\n");
scanf ("%d",&x);
  for(i=1; i<x+1; i++ ) {
      scanf("%s", a);
        fprintf(f1, "%s\n", a);
    }
    fclose(f1);
    
   FILE *f2;
    f2=fopen("f2.txt","wt");
    if(f2==NULL){
        printf("Error");
        return 0;
    }
    f1=fopen("f1.txt", "r");
    if(f1==NULL){
        printf("Error");
}
    if(!f2){
        printf("Error!");
        return 0;
    }
    while(!feof(f1)){
        fgets(s, 48, f1);
        if(s[0]=='a'){
            fputs(s,f2);
            fputs("\n",f2);
        }
    }
    fclose(f1);
    fclose(f2);
   
    return 0;
    
}
