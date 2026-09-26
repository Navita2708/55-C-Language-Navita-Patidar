#include <stdio.h>

int main() 
{
    int x;

    printf("Enter a number: ");
    scanf("%d", &x);

    x--;
    printf("Decremented value: %d\n", x);

    return 0;
}
