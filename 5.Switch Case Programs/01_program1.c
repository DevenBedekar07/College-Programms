#include<stdio.h>

int main(){
    
    int var=1;

    switch (var)
    {
    case 1:
       printf("Case 1 is matched \n");
       break;


    case 2:
       printf("Case 2 is matched \n");
       break;  
    
    case 3:
       printf("Case 3 is matched \n");
       break;

    default:
        printf("Default case is matched \n");
        break;
    }
    return 0;
}