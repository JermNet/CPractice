#include <stdio.h>

struct s1 {

    int x;
    int y;
    int z;

};

union u1 {
    int x;
    int y;
    int z;
};

int main() {

    printf("%d\n", sizeof(int));
    printf("%d\n", sizeof(union u1));
    printf("%d\n", sizeof(struct s1));

    return 0;
}