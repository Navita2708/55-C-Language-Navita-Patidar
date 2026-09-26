#include <stdio.h>

int main()
 {
    int x;
    int y;
    printf("Navita Patidar \n");

    printf("Enter the values:\n");

    printf("x= ");
    scanf("%d" , &x);

    printf("y= ");
    scanf("%d" , &y);

    if (x > 0 && y > 0) 
    {
        printf("Both numbers are positive\n");
    }
    else
    {
     printf("At least one number is not positive\n");
    }
    return 0;
}
