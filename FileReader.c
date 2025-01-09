#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

int main()
{

    FILE *fp;
    fp = fopen("file.txt", "a");
    fprintf(fp, "hello");

    if (fp != NULL)
    {
        printf("Success!");
    }
    else
    {
        printf("It didn't work, please try again!");
    }

    fclose(fp);

    return 0;
}