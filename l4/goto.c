#include <stdio.h>

int main(int argc, char *argv[]){
  goto label_1;
  printf("this statement doesn't execute.\n");

  label_1:
  return 0;
}