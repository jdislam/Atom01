#include <stdio.h>
int Ugly(int i) {
  while (i % 2 == 0)
    i = i / 2;
  while (i % 3 == 0)
    i = i / 3;
  while (i % 5 == 0)
    i = i / 5;
  if (i == 1)
    return 1;
  else
    return 0;
}

int NthUgly(int N) {
  int i = 1;
  int count = 1;
  while (N > count) {
    i++;
    if (Ugly(i))
      count++;
  }
  return i;
}

int main() {
  int N;
  printf("Enter any number: ");
  scanf("%d", &N);
  unsigned ans = NthUgly(N);
  printf("%dth ugly no. is %d \n", N, ans);
  return 0;
}
