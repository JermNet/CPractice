#include <stdio.h>

int main () {

    int d=255;
    int o=0377;
    int x=0xff;
    char c='\x0025';
    char str[]="Hello";
    char *ptr=str;
    ptr=&d;
    printf("The decimal number is: %d\n", d);
    printf("The decimal number is: %d\n", o);
    printf("The octal number is: %o\n", o);
    printf("The decimal number is: %d\n", x);
    printf("The hex number is: %x\n", x);
    printf("The char is: %c\n", c);
    printf("%d\n", d);
    printf("%p\n", &d);
    printf("%p\n", ptr);
    printf("%d\n", *ptr);

    return 0;
}