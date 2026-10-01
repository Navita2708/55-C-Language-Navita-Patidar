#include<stdio.h>

int main()
{
    int a;
    int b;
    printf("Navita Patidar\n");

    printf("Enter first number: ");
    scanf("%d", &a);

    printf("Enter second number: ");
    scanf("%d", &b);

    printf("Result of & operator: %d\n", a & b);
    printf("Result of | operator: %d\n", a | b);
    printf("Result of ^ operator: %d\n", a ^ b);
    printf("Result of ~ operator: %d\n", ~a);
    printf("Result of << operator: %d\n", a << 1);
    printf("Result of >> operator: %d\n", a >> 1);

    return 0;
}