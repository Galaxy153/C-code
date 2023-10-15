//
// Created by 32186 on 2023/10/15.
//
#include <stdio.h>
int main(void)
{
  int grade;
  printf("Please enter numerical grade :");
  scanf("%d", &grade);
  while (1)
  {
    if (grade > 100 || grade < 0)
    {
      printf("Your entered a wrong grade!\nPlease enter proper numerical grade : :");
      scanf("%d", &grade);
    }
    else
      break;
  }
  switch (grade / 10)
  {
    case 0:
    case 1:
    case 2:
    case 3:
    case 4:
    case 5:printf("Letter grade : F\n");
      break;
    case 6:printf("Letter grade : D\n");
      break;
    case 7:printf("Letter grade : C\n");
      break;
    case 8:printf("Letter grade : B\n");
      break;
    case 9:
    case 10:printf("Letter grade : A\n");
      break;
  }
  return 0;
}