#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
 
 
int main() {
    // 1st step
    FILE *fp;
 
    // 2nd step
    fp = fopen("firstFile.txt", "r");
    char line [100];
 
    //3rd step
    while (!feof(fp))
    {
        fgets(line, 100,fp );
        puts(line);
    }
 
    // 4th step
    fclose(fp);
    return 0;

}