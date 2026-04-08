//Sum of digits of a given number
#include <stdio.h>

int main() {
    int n=123,sum=0,r;
 
     while(n>0){ 
        r = n%10;
        sum =sum + r;
        n=n/10; 
     }
     printf("Sum of Digits: %d \n", sum);
      

    return 0;
}