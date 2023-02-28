#include <stdio.h>
void main()
{
  int n, rev=0, rem,temp;
  printf("Enter an number\n");
  scanf("%d", &n);
  temp=n;
  while (n != 0)
  {
    rem = n % 10;
    rev = rev * 10 + rem;
    n /= 10;
  }
  if(rev==temp)
  {
  printf("The no is palindrome\n");
  }
  else
  {
  printf("The no is not a palindrome\n");
  }
}