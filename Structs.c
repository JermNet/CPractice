#include <stdio.h>

struct students {

    char* name;
    int id;
    float mark;

};

int main() {

    struct students student1;
    struct students student2;
    struct students student3;

    student1.name="Chris";
    student1.id=10549;
    student1.mark=9.5;

    student2.name="Peter";
    student2.id=17749;
    student2.mark=10;

    student3.name="Jeremy";
    student3.id=17339;
    student3.mark=10;

    printf("==========================List Of Students==========================\n");
    printf("%d, %s, %.2f\n", student1.id, student1.name, student1.mark);
    printf("%d, %s, %.2f\n", student2.id, student2.name, student2.mark);
    printf("%d, %s, %.2f\n", student3.id, student3.name, student3.mark);
    printf("=============================End Of List============================\n");

    return 0;
}