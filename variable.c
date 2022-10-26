// The C programming language is contained with the following:
// 1. preprocessor such as (#include <stdio.h>) and is always included at the top of the program
// 2. variables
#include <stdio.h>

int main()
{
    int x=4, y=3, z=5;
    float gpa =89.9;
    char score = 's';
    char name[] = "Mogbolahan";

    printf("Hello, %s your gpa is %lf \n", name, gpa);
    printf("%d\n%d\n%d\n", x,y,z);
    return 0;

}