#include<stdio.h>

int main(){
    
    int i, big,small,arr[10];

    

    printf("Enter 10 numbers \n");
    
    for ( i = 0; i < 10; i++)
    {
        scanf("%d",&arr[i]);
        
    }

    big=small=arr[0];
    
    for ( i = 1; i < 10; i++)
    {
        if (arr[i]<small)
        {
            small=arr[i];
        }
        

        if (arr[i]>big)
        {
            big=arr[i];
        }
        
    }

    printf("Biggest Number is : %d \n",big);
    printf("Smallest Number is : %d \n",small);
    
    
    
    return 0;
}