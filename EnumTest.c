#include <stdio.h>

int main() {
    enum day {
        monday,
        tuesday,
        wednesday,
        thursday,
        friday,
        saturday,
        sunday
    };

    printf("%d %d %d\n", monday, tuesday, wednesday);

    return 0;
}