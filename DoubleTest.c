#include <stdio.h>

int main() {

    float myFloatNum = 3.5;
    double myDoubleNum = 3.5;

    float x = 100;

    if(x == (int) x) {
        printf("They are the same\n");
    }
    else {
        printf("They are not the same\n");
    }

    printf("%f\n", myFloatNum);
    printf("%f\n\n", myDoubleNum);

    printf("%f\n", x);
    printf("%d\n", x);
    printf("The division output: %f\n", x);


    char a = 0xfb; 
    unsigned char b=0xfb;
    if(a == b) {
        printf("They are the same\n");
    }
    else {
        printf("They are not the same\n");
    }


    return 0;
}