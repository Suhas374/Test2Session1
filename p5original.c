#include<stdio.h>  
  
#define N 21 
  
int main()  
{  
    int num[N], i;  
  
    for(i = 0; i < N; i++)  
        num[i] = i + 1;  
  
    for(i = 0; i < N; i++)  
            printf("%d\t", num[i]);  
  
    return 0;  
}  