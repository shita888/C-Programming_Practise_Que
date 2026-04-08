#include<stdio.h>
int main()
{ 
    int n=97,m=65;

printf("--- LowerCase Letter ---\n");
    while( n<123 && n>96){ 
        printf("%c=%d, ",n,n );
        n++;
    }

printf("\n--- UpperCase Letter ---\n");
     while( m<91 && m>64){ 
        printf("%c=%d, ",m,m );
        m++;
    }
    
    return 0;
}