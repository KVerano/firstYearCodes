#include <stdio.h>

// 2,4,6,8,10,12.....n EVEN
// 1,3,5,7,9,11.....n ODD

int main()
{
    int num;

    printf("Enter a number between 100 to -100:");
    scanf("%d", &num);

    if (num > 100 || num < -100)
    {
        printf("out of bounce");
    }

    else
    {
        if (num % 2 == 0)
        {
            printf("Even Number");
        }
        else
        {
            printf("Odd Number");
        }
    }
}