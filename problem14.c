//Input Until Duplicate Number
//Write a C program that prompts the user to input a series of numbers until they input a duplicate number. Use a //while loop to check for duplicates.

#include <stdio.h>

int main() {
    int n=2,m;
 
     while(n>0){ 
        printf("Enter Num:");
        scanf("%d",&m);
        if(n==m){

            printf("%d==%d",n,m);
            break;
        }
     }
      
    return 0;
}