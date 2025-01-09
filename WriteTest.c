#include <stdio.h>
 
int main() {
  FILE *fp;
 
  int i1[10]={1,2,3,4,5,6,7,8,9,10};
  int i2[10];
  int x;
  
  fp=fopen( "MyFile.bin", "w+b" );
  
  fwrite(&i1, sizeof(i1), 1, fp);
  
  rewind(fp);

  fread(i2, sizeof(i2), 1, fp);

  for(x = 0; x < (sizeof(i2)/sizeof(i2[0])); x++) {
    printf("%d\n", i2[x]);
  }

  fclose(fp);
  return 0;
}