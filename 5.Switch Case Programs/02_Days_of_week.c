#include<stdio.h>

int main(){
    
    int day=4;

    printf("The day with number %d is : \n",day);
    

    switch (day)
    {
    case 1:
        printf("Monday \n");
        break;

    case 2:
        printf("Tuesday \n");
        break;
    
    case 3:
        printf("Wednesday \n");
        break;

    case 4:
        printf("Thursday \n");
        break;

    case 5:
        printf("Friday \n");
        break;


    case 6:
        printf("Saturday \n");
        break;


    case 7:
        printf("Sunday \n");
        break;    

    default:
        printf("Invalid Input \n");
        
        break;
    }
    return 0;
}