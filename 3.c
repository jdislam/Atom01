#include <stdio.h>
int checkPalindrome(int num) {
  int temp, rem, rev = 0;
  temp = num;

  while (num != 0) {
    rem = num % 10;
    rev = rev * 10 + rem;
    num /= 10;
  }

  if (rev == temp)
    return 0;
  else
    return 1;
}

int main() {
  int num;

  printf("Enter the number: ");
  scanf("%d", &num);

  if (checkPalindrome(num) == 0)
    printf("%d is a Palindrome Number.\n", num);
  else
    printf("%d is not a Palindrome Number.\n", num);

  return 0;
}
