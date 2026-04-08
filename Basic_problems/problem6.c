//C Program to Swap Two Numbers
#include<stdio.h>
int main()
{
    int a,b,t=0;

    printf("Enter value-a: ");
    scanf("%d",&a);
    printf("Enter value-b: ");
    scanf("%d",&b);
    
    t = a;
    a = b;    // With Third-variable
    b = t;     

    a = a+b;
    b = a-b;  // Without Third-variable
    a = a-b;
    printf("Value of a: %d\n",a);
    printf("Value of b: %d",b);
    return 0;
}