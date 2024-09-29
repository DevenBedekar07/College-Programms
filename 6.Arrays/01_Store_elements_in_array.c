#include<stdio.h>

int main(){
    
    int n,i;

    printf("Enter the number of elements \n");
    scanf("%d",&n);

    int arr[n];

    printf("Enter %d elements : \n",n);

    for (int i = 0; i < n; i++)
    {
        printf("Enter %d \n",i+1);
        scanf("%d",&arr[i]);
        
    }
    
    printf("The elements of array are : \n");
    for ( i = 0; i < n; i++)
    {
        printf("%d \n",arr[i]);
        
    }
    
    
    return 0;
}