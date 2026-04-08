/*  * * * *  
    * * * *
    * * * *
    * * * *   */
#include<stdio.h>
int n;
void square() {

    printf("Enter Size of Square: ");
    scanf("%d",&n);

    for(int i=0;i<n;i++)
    {
        for(int i=0;i<n;i++)
        {
          printf("* ");
        } 
     printf("\n"); 
    }
    return;
}

int main(){
   square(); 

}