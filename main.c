#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>

char ** parse_args (char * line);

char ** parse_args (char * line) {
  char ** ans = malloc (256); 
  int i = 0;
  char * now;
  while (now != NULL) {
    ans [i] = strsep (&now, " ");
    i ++;
  }
  return ans;
}
int main () {
  char ** args = parse_args ("ls -a -l");
  printf ("Testing: \"ls -a -l\" \n"); 
  execvp (args[0], args); 
  printf ("Didn't work"); //shouldn't get here
  return 0;
}
