#include <stdio.h>

int main()
{
    int c;
    printf("Type a letter: ");
    c = getchar();
    printf("You typed '%c'.\n", c);
    putchar(c);

    return (0);
}