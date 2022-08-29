#include <stdio.h>

int findCude(int n) { return n * n * n; }

int main(void) {
  printf("ENTER A NUMBER = ");
  int k;
  scanf("%d", &k);
  printf("THE CUDE OF %d iS = %d\n\n", k, findCude(k));
  return 0;
}
