//
// Created by 32186 on 2023/10/17.
//
#include <stdio.h>
int main(void)
{
  int num;
  printf("Please enter a digit :");
  scanf("%d", &num);
  printf("Digits reversed :");
  do
  {
    printf("%d", num % 10);
    num /= 10;
  }
  while (num != 0);
  return 0;
}