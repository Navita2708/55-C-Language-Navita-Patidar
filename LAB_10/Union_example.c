#include <stdio.h>

union Data
{
    int i;
    float f;
    char ch;
};

int main()
{
    union Data d;

    d.i = 20;
    
    printf("Navita Patidar\n");

    printf("Integer: %d", d.i);

    return 0;
}
