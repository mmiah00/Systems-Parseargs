#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>

char ** parse_args (char * line);

char ** parse_args (char * line) {
  char ** ans;
  int i = 0;
  char * now;
  while (now != NULL) {
    ans [i] = strcep (now, " ");
    i ++;
  }
  return ans; 
}
int main () {

  return 0;
}
