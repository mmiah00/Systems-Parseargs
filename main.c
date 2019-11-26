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
    ans [i] = strsep (now, " ");
    i ++;
  }
  return ans;
}
int main () {
  char ** args = parse_args ("does this work"); 
  return 0;
}
