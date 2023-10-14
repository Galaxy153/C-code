//
// Created by 32186 on 2023/10/14.
//
#include<stdio.h>
int maximum(int x, int y)
{
  return x > y ? x : y;
}

int minimum(int x, int y)
{
  return x < y ? x : y;
}

int main(void)
{
  int num1, num2, num3, num4, max1, max2, min1, min2, max, min;

  printf("Please enter four integers (separate by a space) :");
  scanf("%d %d %d %d", &num1, &num2, &num3, &num4);

  max1 = maximum(num1, num2);
  min1 = minimum(num1, num2);
  max2 = maximum(num3, num4);
  min2 = minimum(num3, num4);

  max = maximum(max1, max2);
  min = minimum(min1, min2);

  printf("The largest : %d\nThe smallest : %d\n", max, min);
  return 0;
}