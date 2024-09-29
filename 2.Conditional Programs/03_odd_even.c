#include<stdio.h>

int main(){
    
    int a;
    
    printf("Enter the number to check whether it's even or odd \n");
    scanf("%d",&a);

    if (a%2==0)
    {
        printf("The entered number is even \n");
        
    }
    else
    {
        printf("The entered number is odd \n");
        
    }
    
    
    return 0;
}