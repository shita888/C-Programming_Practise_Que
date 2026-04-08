/*  * * * *
    * * *
    * *
    *
*/
#include<stdio.h>
void Reverse_R_Tri(){
int n;
    printf("Enter num row: ");
    scanf("%d",&n);

    for(int i=1;i<=n;i++)
    {
       for(int j=0;j<=n-i;j++)
        {
          printf("* ",j);
        } 
        printf("\n");
    }
    return;
}
int main(){
    Reverse_R_Tri();
}