#include <stdio.h>

int fibonacci(int n) {
  int a, b, c, i;
  if (n == 0)
    return 0;
  else if (n == 1)
    return 1;
  else {
    a = 0;
    b = 1;

    for (i = 2; i <= n; i++) {
      c = a + b;
      a = b;
      b = c;
    }
    return c;
  }
}

int main(void) {
  printf("ENTER A NUMBER =>> ");
  int k;
  scanf("%d", &k);
  printf("THE N'th FIBONACCI NUMBER IS =>> %d\n\n", fibonacci(k));
  return 0;
}
