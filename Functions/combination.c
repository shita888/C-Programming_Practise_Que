#include<stdio.h>

int Fact_n(int n){
    int m = 1;
    for(int i=1; i<=n; i++){
        m = m*i;
    }
    return m;
}

int Fact_r(int r){
    int m = 1;
    for(int i=1; i<=r; i++){
        m = m*i;
    }
    return m;
} 

int Fact_nr(int n, int r){ 
    
    int  Q = n - r;
    int p=1;
    for(int i=1; i<=Q; i++){
        p = p*i;
    }
    printf("(n-r)! = %d\n",p);   
   
    return p;
}

int main(){ 

    int n, r;
    printf("Enter the value of n: ");
    scanf("%d", &n);    
    printf("Enter the value of r: ");
    scanf("%d", &r);

   int N = Fact_n(n);
    int R = Fact_r(r);
    int NR = Fact_nr(n, r);

    printf("nCr = %d\n", N / (R * NR));
    
    return 0;
}
