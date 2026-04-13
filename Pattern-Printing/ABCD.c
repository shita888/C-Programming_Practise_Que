#include<stdio.h>
int main(){
    int n =4;
       int p=65;
    for(int i=1;i<=n;i++)
    {
        for(int j=65;j<=65+n-1;j++)
        {  
                printf("%c ",j); 
        }   
//code---------------------------------------
         for(int a=1;a<=2;a++)
        {  
                printf("  ",a); 
        }  
        for(int j=65;j<=65+i-1;j++)
        {  
                printf("%c ",j); 
        } 
//code---------------------------------------
 
        for(int y=0;y<=n-i;y++)
        {  
                printf("  ",y); 
        } 

     
        for(int j=65;j<=65+i-1;j++)
        {  
                printf("%c ",p); 
                p++;
        }

        printf("\n");
    }
}
   