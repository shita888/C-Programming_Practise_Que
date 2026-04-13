
#include<stdio.h>
void R_Tri(){
int n;
    printf("Enter num row: ");
    scanf("%d",&n);
   int a=1;
    for(int i=1;i<=n;i++)
    {   
         for(int j=1;j<=i;j++)
        {   
            printf("%d ",a);
            a++;
        } 
 
    //    for(int j=1;j<=i;j++)
    //     {  
    //         int l=j*5;
    //         printf("%d ",a*l);
    //         a++;
    //     } 
        printf("\n");
    }
    return;
}
int main(){
    R_Tri();
}