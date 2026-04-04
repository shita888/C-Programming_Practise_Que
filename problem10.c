// WAP Count the number of digits 
#include <stdio.h>
int main() {
    int n=8876,count=0;
 
     while(n>0){ 
         n=n/10;
         count++;
     }
     printf("Num of Digits: %d \n",count);
      
    return 0;
}