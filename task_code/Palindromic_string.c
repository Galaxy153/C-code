//
// Created by 32186 on 2023/10/14.
//
#include<stdio.h>
int main(void)
{
  int length = 0;
  char a[10000];
  printf("Please enter the length of string :");
  scanf("%d", &length);
  printf("Please enter the string you want to complete :");
  getchar();
  for(int i = 0; i < length; i++)
  {
    scanf("%c", &a[i]);
  }
  for(int j = 0; j < length; j++)
  {
    if (a[j] == '?')
    {
      printf("%c", a[length - 1 - j]);
    }
    else
    {
      printf("%c", a[j]);
    }
  }
  return 0;
}