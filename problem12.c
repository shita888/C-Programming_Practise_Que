 //fibonaaci series
#include<stdio.h>
int main()
{
    int n,a=1,b=1,T;
    printf("Enter a num: ");
    scanf("%d",&n);
    printf("%d, ",a);
    printf("%d, ",b);

    for(int i=3;i<=n;i++){
        
        T=a+b ;
         a=b;
         b=T; 

    if(i<n){
            printf("%d, ",T);
        }else{
            printf("%d ",T);
        }
         
    } 
    return 0;
}


 