#include <stdio.h>
#include <stdlib.h>

int main()
{
    char card_code[3];
    puts("Enter the card code: ");
    scanf("%2s", card_code);

    int val = 0;
    if (card_code[0] == 'K' || card_code[0] == 'Q' || card_code[0] == 'J')
    {
        val = 10;
    }
    // else if(card_code[0] == 'Q')
    // {
    //     val = 10;
    // }
    // else if(card_code[0] == 'J')
    // {
    //     val = 10;
    // }
    else if(card_code[0] == 'A')
    {
        val = 11;
    }
    else
    {
        val = atoi(card_code);
    }
// check if the value is 3 to 6

if (val >=2 && val <=6 )
{
    puts("Count has gone up");
}
// check if the card was 10, J, Q, or K
else if(val == 10)
{
    puts("Count has gone down");
}
    printf("The card value is: %d\n", val);
    return 0;
}