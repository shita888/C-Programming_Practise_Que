// print the sum of series =>   1-2+3-4+5
#include <stdio.h>

int main() {
    int n=83756136,count=0,r;

     int test = n;
     test = test%10;
     printf("the last value: %d\n",test);

     while(n>0){ 
         n=n/10;
         count++;
     }
     printf("Num of Digits: %d \n",count);
     
     if(count%2==0)
     {
         r = count/2;
           printf("Sum of series: %d \n",r);
     }
     else{
         r = (count/2)+ test;
           printf("Sum of series: %d \n",r);
     }

    return 0;
}