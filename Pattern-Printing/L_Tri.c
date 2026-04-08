/*      *
      * *
    * * *
  * * * * 
*/
#include<stdio.h>
void L_Tri(){
int n;
    printf("Enter num row: ");
    scanf("%d",&n);

    for(int i=1;i<=n;i++)
    { 
       for(int k=1;k<=n-i;k++)
        {
          printf("  ",k);
        } 
       for(int j=1;j<=i;j++)
        {
          printf("* ",j);
        } 
        printf("\n");
    }
    return;
}
int main(){
    L_Tri();
}