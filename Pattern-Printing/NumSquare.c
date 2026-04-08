
/*  1 2 3 4
    1 2 3 4
    1 2 3 4     */
#include<stdio.h>
void NumSquare(){
int n;
    printf("Enter Size of Square: ");
    scanf("%d",&n);

    for(int i=1;i<=n;i++)
    {
       for(int i=1;i<=n;i++)
        {
          printf("%d ",i);
        } 
        printf("\n");
    }
    return;
}
int main(){
    NumSquare();
}