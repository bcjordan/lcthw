#include <stdio.h>

int main(int argc, char *argv[])
{
  int distance = 100;
  float power = 2.345f;
  double super_power = 56789.5432;
  char initial = 'A';
  char first_name[] = "Zed";
  char last_name[] = "Shaw";

  printf("You are %d miles away.\n", distance);
  printf("You have %f levels of power.\n", power);
  printf("You have %f awesome super powers.\n", super_power);
  printf("I have an initial %c.\n", initial);
  printf("I have a first name %s.\n", first_name);
  printf("I have a last name %s.\n", last_name);
  printf("My whole name is %s %c. %s.\n",
          first_name, initial, last_name);

  printf("Scientific notation %e.\n", 3.9265e+2);
  printf("Scientific notation %E.\n", 3.9265E+2);
  printf("Octal %o\n", 610);
  printf("Left justify %-20.6f and other stuff.\n", 0.12345678910);
  printf("Left justify %-+20.6f and other stuff.\n", 0.12345678910);

  return 0;
}
