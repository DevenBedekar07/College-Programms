#include<stdio.h>

int main(){
    
    int i;

     printf("Even Numbers between 1 to 100 are : \n");

    for (int i = 0; i <= 100; i++)
    {
        if (i%2==0)
        {
            printf("%d \n",i);
            
        }
        
    }

    
    printf("Odd Numbers between 1 to 100 are : \n");
    
    for (int i = 0; i <= 100; i++)
    {
        if (i%2!=0)
        {
            printf("%d \n",i);
            
        }
        
    }
    
    
    return 0;
}