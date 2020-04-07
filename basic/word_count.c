#include <stdio.h>
#define TRUE 1
#define FALSE 0

int is_alphabet(char c) {
  int result;
  if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
    result = TRUE;
  else 
    result = FALSE;
  return result;
}

int main(int argc, char** argv) {
  if (argc < 2) {
    printf("Please input a file name!\n");
    return 1;
  }
  char* filename = argv[1];
  printf("We are going count word for file %s\n", filename);
  freopen(filename, "r", stdin);
  
  int c, p, n;
  n = 0;
  p = ' ';
  while ((c = getchar()) != EOF) {
    if (is_alphabet(c) && !is_alphabet(p)) {
      n++;
      printf("\n");
    }
    if (is_alphabet(c)){
      printf("%c", c);
    }
    p = c;
  }
  printf("\n%d\n", n);
}
