 #include<stdio.h>
 
 int main(){
    
    int n,fact,i;
    fact=1;

    printf("Enter the number  \n");
    scanf("%d",&n);

    for (int i = 1; i < n; i++)      // Initialising i on 0 or else program will not run as required
    {
         fact*=i;
        
    }
    
    printf("The factorial of %d is : %d \n",n,fact);
    
    
    return 0;
 }