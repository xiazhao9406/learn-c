#include <stdio.h>

#define MAX_LINE_COUNT 1024

int get_line(char line[]);
void copy(char to[], char from[]);

int main(int argc, char** argv) {
  if (argc < 2) {
  printf("please input a file name!\n");
  return 1;
  }
  char* filename = argv[1];
  printf("we are going to count line for file %s\n", filename);
  freopen(filename, "r", stdin);
  
  int max_length = 0;
  char max_line[MAX_LINE_COUNT];
  int length;
  char line[MAX_LINE_COUNT];

  while ((length = get_line(line)) >= 0){
    if (length > max_length) {
      max_length = length;
      copy(max_line, line);
      }
  }
  printf("max length is: %d\n", max_length);
  printf("max value is: %s\n", max_line);


}

int get_line(char line[]) {
  int i = 0;
  while ((line[i] = getchar()) != EOF && line[i] != '\n') {
    i++;
  }
  if (line[i] == EOF) {
    return -1;
  }
  else {
    line[i] = '\0';
    return i; 
  }
}

void copy(char to [], char from[]) {
  int i = 0;
  while ((to[i] = from[i]) != '\0') {
    i++;
  }
}
