//
// Created by 32186 on 2023/10/17.
//
#include <stdio.h>
int main(void)
{
  int num;
  printf("Please enter a dihit :");
  scanf("%d", &num);
  for (int i = 1; i * i <= num; i++)
  {
    if ((i * i) % 2 == 0)
      printf("%d\n", i * i);
    else
      continue;
  }
  return 0;
}