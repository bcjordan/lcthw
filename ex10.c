#include <stdio.h>

int main(int argc, char *argv[])
{

  argv[0] = "testing";
  int i = 0;

  // go through each string in argv
  // why am I skipping argv[0]?
  for(i = 0; i < argc; i++) {
    printf("arg %d: %s\n", i, argv[i]);
  }

  // let's make our own array of strings
  char *states[] = {
    "California", "Oregon",
    "Washington", "Texas",
    NULL
  };
  int num_states = 5;

  // extra credit: comma separates out subexpressions
  // c.f. http://www.eskimo.com/~scs/cclass/int/sx4db.html
  for(i = 0; i < num_states; i++) {
    printf("state %d: %s\n", i, states[i]);
  }

  printf("%d\n", 5 < 3);

  return 0;
}

