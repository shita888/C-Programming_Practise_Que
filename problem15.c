// Palindrome Number Check Using a While Loop
//Write a C program that implements a program to check if a given number is a palindrome using a while loop.

#include <stdio.h>

int main() {
    int  r,count,n=121;
     
    // printf("Enter Num:");
    // scanf("%d",&m);

     while(n>0){ 
        r=n%10;
        count = r;
        n=n/10; 
         
     }
       if (count == n)
       {
        printf("Palindrome");
       }
       else{
        printf("Not palindrome");
       }
      
    return 0;
}