#include <stdio.h>

int main(int argc, char** args) {
  for (int i = 0; i < argc; i++) {
    printf("argument %d: %s\n", i, args[i]);
  }
  return 0;
}




