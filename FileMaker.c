#include <stdio.h>

int main()
{
    FILE *filePointer;

    filePointer = fopen("C:\\Users\\wjd47\\OneDrive\\Desktop\\test.txt", "w");

    if (filePointer == NULL)
    {
        printf("Can't create file\n");
        return 1;
    }

    fprintf(filePointer, "This is a test");

    fclose(filePointer);

    printf("Success!");

    return 0;
}