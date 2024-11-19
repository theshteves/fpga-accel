int triangle(int n) {
  int sum = 0;
  for (int i = 1; i <= n; i++)
    sum += i;
  return sum;
}

#include "stdio.h"
int main() {
    printf("%x", triangle(0x5));
    return 0;
}
