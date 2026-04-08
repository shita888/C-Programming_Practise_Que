// Palindrome Number Check Using a While Loop
//Write a C program that implements a program to check if a given number is a palindrome using a while loop.

#include <stdio.h>

int main() {
    int  rev,rem=0,n;
     
    printf("Enter Num:");
    scanf("%d",&n);

     int temp=n;

     while(n>0){ 
        rev=n%10;
         rem=(rem*10)+rev;
        n=n/10; 
         
    }  
    // printf("Reverse:%d\n",rem); 
    if ( rem == temp)
       {
        printf("%d is Palindrome",temp);
       }
    else{
        printf("%d is Not palindrome",temp);
       }    
      
    return 0;
}