#include<stdio.h>

int main(){
    
    int a,b;

    printf("Enter the two numbers \n");
    scanf("%d %d",&a,&b);

    if (a==b)
    {
        printf("Both the numbers are equal \n");
        
    }
    else
    {
        printf("The numbers are not equal \n");
        
    }
    
    
    return 0;
}