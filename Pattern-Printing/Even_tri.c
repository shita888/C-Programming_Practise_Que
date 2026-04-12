#include<stdio.h>
int main(){

    int n =4;
   
    for(int i=1;i<=n;i++)
    {

        for(int j=0;j<=2*i-1;j++)
        { 
            if(j%2==0){  
                printf("%d ",j);
            }
        }   
        printf("\n");
    }

  
return 0;
}