#include <stdio.h>

#define LENGTH 10
#define WIDTH 5
#define NEWLINE '\n'

int main()
{
    int area;

    area = LENGTH * WIDTH;

    printf("Value of Area is: %d", area);
    printf("%c", NEWLINE);

    return 0;
}