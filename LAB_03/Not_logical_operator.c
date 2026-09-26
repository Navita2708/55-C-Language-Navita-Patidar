#include<stdio.h>

int main()
 {
    int x;
    printf("Navita Patidar\n");
    printf("Enter a number:\n ");

    printf("x=");
    scanf("%d", &x);

    if (!(x == 0)) 
    {
        printf("The number is not zero\n");
    }
     
    else
    {
        printf("The number is zero\n");
    }

    return 0;
}