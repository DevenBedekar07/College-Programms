#include<stdio.h>

int main(){
    
    int a,rev,rem;
    rev=0;

    printf("Enter any number \n");
    scanf("%d",&a);

    while (a!=0)
    {
        rem=a%10;
        rev=rev*10+rem;
        a/=10;
    }
    
    printf("The Reverse of the given number will be : %d \n",rev);
    
    
    return 0;
}