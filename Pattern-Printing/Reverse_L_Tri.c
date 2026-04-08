/*     
    * * * *
      * * *
        * * 
          * 
*/
#include<stdio.h>
void Reverse_L_Tri(){
int n;
    printf("Enter num row: ");
    scanf("%d",&n);

    for(int i=0;i<n;i++)
    { 
       for(int k=1;k<=i;k++)
        {
          printf("  ",k);
        } 
       for(int j=1;j<=n-i;j++)
        {
          printf("* ",j);
        } 
        printf("\n");
    }
    return;
}
int main(){
    Reverse_L_Tri();
}