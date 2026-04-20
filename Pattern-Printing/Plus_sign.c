#include <stdio.h>

int main() {
   int n;
   printf("Enter the size of the plus sign (odd number): ");
   scanf("%d", &n);


if(n % 2 == 0) {
   printf("Please enter an odd number.\n"); 
}
else{ 
    int d = n/2 + 1;
   for(int i=1;i<=n;i++)
   { 
         for(int j=1;j<=n;j++)
         { 
            if(i==d || j==d)
            {
               printf("* ");
            }
            else{
               printf("  ");
               }
         }
         printf("\n");
      
   }
} 
return 0;
}