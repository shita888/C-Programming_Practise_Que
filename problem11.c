//print the factorial of a given no.
#include<stdio.h>
int main()
{
    int r=1,n;
    printf("Enter a num: ");
    scanf("%d",&n);

    for(int i=1;i<=n;i++){
        r = i*r; 
    }

    for(int i=1;i<=n;i++){
        if(i<n){
            printf("%d*",i);
        }else{
            printf("%d = ",i);
        }
    }
        printf("%d",r);
    return 0;
}



// print the factorial of first n number

// #include<stdio.h>
// int main()
// {
//     int r=1,n;
//     printf("Enter a num: ");
//     scanf("%d",&n);

//     for(int i=1;i<=n;i++){
//         r = i*r; 
//         printf("%d!:%d\n",i,r);
//     }
    
//     return 0;
// }

 