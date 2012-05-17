#include <stdio.h>

int main(int argc, char *argv[])
{
  int areas[] = {10, 12, 13, 14, 20};
  areas[0] = 'a';

  areas[1] = 'b';

  char my_name[] = "Brian";
  char name[] = "Zed";

  name[0] = 'b';
  name[1] = 99;
  name[2] = 0x0c;

  name[0] = areas[3];

  areas[0] = name[3];

  char full_name[] = {
    'Z', 'e', 'd',
    ' ', 'A', '.', ' ',
    'S', 'h', 'a', 'w', '\0'
  };

  char my_full_name[] = {
    'B', 'r', 'i', 'a', 'n',
    ' ', 'C', '.',
    'J', 'o', 'r', 'd', 'a', 'n', '\0'
  };

  printf("The number of chars in my_full_name is %ld\n", sizeof(my_full_name) / sizeof(char));
  printf("The number of chars in my_name is %ld\n", sizeof(my_name) / sizeof(char));

  // WARNING: On some systems you may have to change the
  // %ld in this code to a %u since it will use unsigned ints
  printf("The size of an int: %ld\n", sizeof(int));
  printf("The size of areas (int[]): %ld\n", sizeof(areas));
  printf("The number of ints in areas: %ld\n", 
          sizeof(areas) / sizeof(int));
  printf("The first area is %d, the 2nd %d.\n",
          areas[0], areas[1]);
  
  printf("The size of a char: %ld\n", sizeof(char));
  printf("The size of name (char[]): %ld\n",
          sizeof(name));
  printf("The number of chars: %ld\n",
          sizeof(name) / sizeof(char));

  printf("The size of full_name (char[]): %ld\n",
          sizeof(full_name));
  printf("The number of chars: %ld\n",
          sizeof(full_name) / sizeof(char));

  printf("name=\"%s\" and full_name=\"%s\"\n",
          name, full_name);

  return 0;
}
