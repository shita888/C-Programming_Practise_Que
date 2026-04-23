// Online C compiler to run C program online
#include <stdio.h>

int main() { 
    int n = 4;
    for(int i=1;i<= n;i++)
    {      
            for(int k=1;k<=n-i;k++)
            {  
             printf("  ");      
            }  
            
            for(int j=1;j<=2*i-1;j++)
            {  
             printf("* " );
             
            } 
            
            for(int a=1;a<=n-i;a++)
            {  2*i-1
             printf("%d ", 2*i-1);      
            }  
              
        printf("\n");
    }
    return 0;
}