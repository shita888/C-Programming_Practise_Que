 #include <stdio.h>

int main() { 
    int n = 4;
    for(int i=0;i<=n;i++)
    {   int a;
        if(i%2!=0){
            a=0;
            for(int j=0;j<=i;j++)
            {   
                printf("%d ",a);
                if(a==1){
                    a=0;
                }else{ a=1;}
            }
        }
        else{
             a=1;
            for(int j=0;j<=i;j++)
            { 
                printf("%d ",a);
                 if(a==0){
                    a=1;
                }else{ a=0;}
            }
        }
        printf("\n");
    }
    return 0;
}