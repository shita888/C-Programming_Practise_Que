// Sum of Cubes of Even Numbers Up to a Limit
//Write a C program that calculates and prints the sum of cubes of even numbers up to a specified limit (e.g., 20) using a while loop.

#include<stdio.h>
int main()
{
    int n=20, sum=0 ,cube=0;
 
      
       int i = 1;
    while(i<=n)
    { 
        if(i%2==0)
        { 
           cube=i*i*i;
           printf("%d : %d \n",i,cube); 
           sum = sum + cube;
           i++;
            
        }else{  
            i++;
        }  
             
    }
        printf("Sum of Cubes of Even Num up to (%d):  %d \n",n,cube); 
    return 0;
}
