#include <stdio.h>

struct Student
{
    int roll;
    char name[20];
    float marks;
};
    

int main()
{
    printf("Navita Patidar\n");
    
    struct Student s[3] =
    {
        {1, "Rohit", 70.5},
        {2, "Kavya", 85.0},
        {3, "Diya", 92.5}
    };

    int i;

    for(i = 0; i < 3; i++)
    {
        printf("\nRoll: %d", s[i].roll);
        printf("\nName: %s", s[i].name);
        printf("\nMarks: %.2f\n", s[i].marks);
    }

    return 0;
}
