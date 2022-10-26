#include <stdio.h>

int main()
{
    char fullName[30];
    char mail[30];

    printf("Enter your name: ");
    fgets(fullName, 30, stdin);

    printf("Enter your email: ");
    fgets(mail, 30, stdin);

    printf("Your details are, %s and email is %s  \n", fullName, mail);

    return 0;
}