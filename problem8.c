//reverse the given digit
#include <stdio.h>

int main() {
    int n=83756136,count=0,r;
 
     while(n>0){ 
        r=n%10;
        count = r;
        n=n/10; 
        printf("Reverse of Digits: %d \n",count);
     }
      
    return 0;
}