// Author: Alex Martin arm6554@psu.edu
#include <stdio.h>
#include <readline/readline.h>
#include <math.h>
#include <stdlib.h>

int digit_sum(int n) {
  if(n != 0)
    return n%10 + digit_sum(n/10);
  else
    return n;  
}

int main(void) {
  int value, i;
  char *n = readline("Enter an int: ");
  value = atoi(n);
  i = digit_sum(value);
  printf("sum of digits of %d is %d.\n", value, i);
}