#include<stdio.h>

void main(){
    
    int i,j,rows;

    printf("Enter number of rows : \n");
    scanf("%d",&rows);
    
for ( i = 0; i < rows; i++)
{
    for ( j = 0; j <= i; j++)
    {
        printf("%d ",j+1);
        
    }
    printf(" \n");
    
}

    
}