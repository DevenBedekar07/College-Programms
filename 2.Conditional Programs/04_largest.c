#include<stdio.h>

int main(){
    int a,b,c;

    printf("Enter three numbers to check the largest \n");
    scanf("%d %d %d",&a,&b,&c);

if (a>b && a>c)
{
    printf("A is largest among all \n");
    
}
else if (b>a && b>c)
{
    printf("B is largest among all \n");
    
}
else if (c>a && c>b)
{
    printf("C is largest among all \n");
    
}

else
{
    printf("All the numbers are equal \n");
    
}

    
    return 0;
}