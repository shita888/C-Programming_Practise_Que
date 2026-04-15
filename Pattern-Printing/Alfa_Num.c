/*      1 
        A B 
        1 2 3 
        A B C D  */
#include <stdio.h>

int main() {
    int n=4;
   for(int i=1;i<=n;i++)
   {
      if(i%2!=0){
         for(int j=1;j<=i;j++)
         {
            printf("%d ",j); 
         } 
      }else{
        for(int j=65;j<=65+i-1;j++)
         {
            printf("%c ",j); 
         } 
          
      }
      printf("\n");
   }
   
return 0;
}