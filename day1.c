#include <stdio.h>
#define MAX 20654

int main() {
  FILE *fileptr;
  fileptr = fopen("input.txt", "r");
  char buf[MAX];

  while (fgets(buf, MAX / 2 + 1, fileptr)) {
    printf("%s", buf);
  }
  fclose(fileptr);
}
