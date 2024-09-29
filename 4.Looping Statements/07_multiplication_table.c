#include<stdio.h>

int main(){
    
    int num,i;

    printf("Enter the number to print the table : \n");
    scanf("%d",&num);

    printf("The Multiplication table of %d is : \n", num);
    

    for (int i = 1; i < 10; i++)
    {
        printf(" %d X %d = %d \n", num,i,num*i);
        
    }
    
    
    return 0;
}