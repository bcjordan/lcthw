#include <stdio.h>

int main(int argc, char *argv[])
{
  int i = 0;

  if(argc == 1) {
    printf("You have no arguments. You suck.\n");
  } else if(argc > 1 && argc < 4) {
    printf("Here's your %d arguments:\n", argc - 1);

    for(i = 0; i < argc; i++) {
      printf("%s ", argv[i]);
    }
  } else if(argc == 4) {
    printf("Nice! %d arguments!", argc);
  } else {
    printf("You have too many arguments. You suck.");
  }

  printf("\n");
  return 0;
}

/**
 * Other boolean operators:
 *
 * http://en.wikipedia.org/wiki/Boolean_operation
 *
 * http://en.wikipedia.org/wiki/Operators_in_C_and_C%2B%2B#Logical_operators
 *
 * !, &&, ||
 * ~ bitwise NOT
 * & bitwise AND
 * | bitwise OR
 * ^ bitwise XOR
 * << bitwise lshift
 * >> bitwise rshift
 */

