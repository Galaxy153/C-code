//
// Created by 32186 on 2023/10/17.
//
#include <stdio.h>
int main(void)
{
  int numerator = 0, denominator = 0, m = 0, n = 0 , r = 0;
  printf("Please enter a fraction :");
  scanf("%d/%d", &numerator, &denominator);

  m = numerator, n = denominator;

  while (n != 0)
  {
    r = m % n;
    m = n;
    n = r;
  }
  numerator /= m, denominator /=m;
  printf("In lowest terms : %d/%d", numerator, denominator);
  return 0;
}