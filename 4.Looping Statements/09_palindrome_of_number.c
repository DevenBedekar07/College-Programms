 #include<stdio.h>

int main(){
    
    int a,rev,rem,original;
    rev=0;

    printf("Enter any number \n");
    scanf("%d",&a);

    original=a;

    while (a!=0)
    {
        rem=a%10;
        rev=rev*10+rem;
        a/=10;
    }
    

   if (original==rev)
   {
    printf("The entered number is palindrome \n");
    
   }
   else
   {
    printf("Entered Number is not a palindrome \n");
    
   }
   
   return 0;

}
    