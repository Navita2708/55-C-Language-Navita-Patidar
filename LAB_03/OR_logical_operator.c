#include <stdio.h>
int main() 
{
    int x;
    int y;
    printf("Navita Patidar\n");
    printf("Enter two numbers:\n");

    printf("x=");
    scanf("%d", &x);

    printf("y=");
    scanf("%d", &y);

    if (x > 0 || y > 0)
    {
        printf("At least one number is positive\n");
    }
    else
    {
        printf("Neither number is positive\n");
    }

    return 0;
}
