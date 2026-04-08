
/*  * 
    * * 
    * * *  
    * * * *  
*/
#include<stdio.h>
void R_Tri(){
int n;
    printf("Enter num row: ");
    scanf("%d",&n);

    for(int i=1;i<=n;i++)
    {
       for(int j=1;j<=i;j++)
        {
          printf("%d ",j);
        } 
        printf("\n");
    }
    return;
}
int main(){
    R_Tri();
}