
/*      * 
       * * 
      * * *  
     * * * *  
*/
#include<stdio.h>
void R_Tri(){
int n;
    printf("Enter num row: ");
    scanf("%d",&n);

    // for(int i=1;i<=n;i++)
    // {
    //     for(int k=1;k<=n-i;k++)
    //     {
    //       printf("  ",k);
    //     } 
    //    for(int j=1;j<=i;j++)
    //     {
    //       printf("* ",j);
    //     } 

    //      for(int j=1;j<=i-1;j++)
    //     {
    //       printf("* ",j);
    //     } 
        
    //     printf("\n");




        for(int k=1;k<=n-i;k++)
          {  
            printf("  ");      
          }  
            
        for(int j=1;j<=2*i-1;j++)
          {  
            printf("* ");      
          }   
        printf("\n");

    }
    return;
// }
 
int main(){
    R_Tri(); 
}