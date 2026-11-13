#include <stdio.h>

int main()
{
    int n, a = 0, b = 1, c, sum = 0, i;
    
    printf("Navita Patidar\n");

    printf("Enter number of terms: ");
    scanf("%d", &n);

    printf("Fibonacci series: ");

    for(i = 1; i <= n; i++)
    {
        printf("%d ", a);

        if(a % 2 == 0)
        {
            sum = sum + a;
        }

        c = a + b;
        a = b;
        b = c;
    }

    printf("\nSum of even terms = %d", sum);

    return 0;
}
