#include<stdio.h>
int main(){
    
    int n=5,i ;
for( i=1;i<=n;i++)
    {
        for( int j=1;j<=i;j++)
        {  
                printf("# "); 
        }   
        //--------------------
         for( int y=1;y<=5-i;y++)
        {  
                printf("  ",y); 
        } 
          for( int y=1;y<=5-i;y++)
        {  
                printf("  ",y); 
        } 
        
        for(int r=2;r<=i;r++)
        {  
                printf("# "); 
        }  
        
//code-----------------------------------
         for( int j=1;j<=i;j++)
        {  
                printf("# "); 
        }   
        //---------------------
         for( int y=1;y<=5-i;y++)
        {  
                printf("  ",y); 
        } 
          for( int y=1;y<=5-i;y++)
        {  
                printf("  ",y); 
        } 
        
        for(int r=2;r<=i;r++)
        {  
                printf("# "); 
        }  
//code---------------------------------------
        for( int j=1;j<=i;j++)
        {  
            printf("# "); 
        }   
        //------------------------------
         for( int y=1;y<=5-i;y++)
        {  
                printf("  ",y); 
        } 
          for( int y=1;y<=5-i;y++)
        {  
                printf("  ",y); 
        } 
        
        for(int r=1;r<=i;r++)
        {  
                printf("# "); 
        }  
        printf("\n");
    }
}

