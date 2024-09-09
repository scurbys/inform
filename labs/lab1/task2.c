#include <stdio.h>

int main() {
  int a = 2, b = 3;
  int c = a + b;
  printf("c=%d\n", c);

  a = 5; b = 7;
  c = a + b;
  printf("c=%d\n", c);

  a = 10; b = -2;
  c = a + b;
  printf("c=%d\n", c);

  return 0;
}
