/*  * * * *  
    *     *
    *     *
    * * * *   */
#include<stdio.h>
int n;
void Hollow_square() {

    printf("Enter Size of Square: ");
    scanf("%d",&n);

    int i, j;

    for(i=1;i<=n;i++)
    {
        for(j=1;j<=n;j++)
        {
            if(  i==1 || i==n ||j==1 || j==n    ) 
                { 
                    printf("* "); 
                }
                else
                { 
                    printf("  ");
                }
        }
        printf("\n"); 
    }

    return;
}

int main(){
   Hollow_square(); 

}