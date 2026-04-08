//C Program to Check Whether a Number is Prime or Not
#include<stdio.h>
int main()
{
    int n ,i ,test=0;
    printf("Enter a number: ");
    scanf("%d",&n);
    
    for(i=2;i<=n-1;i++)
    {
        if(n % i != 0)
        {
             test = 1;
        } 
        break;
    }
     

      if(test==0){
            printf("%d is Prime Num\n",n); 
        }
        else{
            printf("%d is NOT Prime Num\n",n); 
        }

    return 0;
} 