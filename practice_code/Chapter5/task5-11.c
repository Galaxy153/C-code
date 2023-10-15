//
// Created by 32186 on 2023/10/15.
//
#include <stdio.h>
int main(void)
{
  int num;
  printf("Please enter a tow-digit number :");
  scanf("%d", &num);

  switch (num / 10)
  {
    case 1:
      switch (num % 10)
      {
        case 0:printf("You entered the number ten.");
          break;
        case 1:printf("You entered the number eleven.");
          break;
        case 2:printf("You entered the number twelve.");
          break;
        case 3:printf("You entered the number thirteen.");
          break;
        case 4:printf("You entered the number fourteen.");
          break;
        case 5:printf("You entered the number fifteen.");
          break;
        case 6:printf("You entered the number sixteen.");
          break;
        case 7:printf("You entered the number seventeen.");
          break;
        case 8:printf("You entered the number eighteen");
          break;
        case 9:printf("You entered the number nineteen.");
          break;
        default:break;
      }
    case 2:printf("You entered the number twenty");
      break;
    case 3:printf("You entered the number thirty");
      break;
    case 4:printf("You entered the number forty");
      break;
    case 5:printf("You entered the number fifty");
      break;
    case 6:printf("You entered the number sixty");
      break;
    case 7:printf("You entered the number seventy");
      break;
    case 8:printf("You entered the number eighty");
      break;
    case 9:printf("You entered the number ninety");
      break;
    default:printf("Your number is out of range 10-99\n");
      return 0;
  }
  if (num / 10 != 1)
  {
    switch (num % 10)
    {
      case 0:printf("\n");
        break;
      case 1:printf("-one\n");
        break;
      case 2:printf("-two\n");
        break;
      case 3:printf("-three\n");
        break;
      case 4:printf("-four\n");
        break;
      case 5:printf("-five\n");
        break;
      case 6:printf("-six\n");
        break;
      case 7:printf("-seven\n");
        break;
      case 8:printf("-eight\n");
        break;
      case 9:printf("-nine\n");
        break;
      default:break;
    }
  }
    return 0;
  }