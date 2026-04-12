#include<stdio.h>
int main(){

    int n =3;
   
    for(int i=1;i<=n;i++)
    {

        for(int j=1;j<=2*i-1;j++)
        { 
            if(j%2!=0){  
                printf("%d ",j);
            }
        }   
        printf("\n");
    }


     

    //  for(int j=1;j<=2*n-1;j++)
    //     { 
    //         if(j%2!=0){  
    //             printf("%d ",j);
    //         }
    //     }  
      


return 0;
}