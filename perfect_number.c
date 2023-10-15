#include <stdio.h>

int main(void)
{
    int e, b = 0, sum;
    printf("There are perfect numbers within one million (inclusive) :\n");
    for (int i = 2; i <= 1000000; i++)
    {
        sum = 1, e = i;

        for (int k = 2; k * k <= i; k++)
        {
            if (i % k == 0)
                sum += k;
        }

        do
        {
            e /= 2;
            sum += e;
        } while (i % 2 == 0 && e % 2 == 0);

        if (sum == i)
        {
            sum = 0;
            for (int k = 1; k <= i / 2; k++)
            {
                if (i % k == 0)
                    sum += k;
            }

            if (sum == i)
            {
                b++; // 记录个数
                printf("%d\tIt's factors is 1", sum);

                for (int a = 2; a <= i / 2; a++)
                {
                    if (sum % a == 0)
                        printf(",%d", a);
                }

                printf("\n");
            }
        }
    }
    printf("%d perfect numbers in total\n", b);
    return 0;
}
