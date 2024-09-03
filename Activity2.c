#include <stdio.h>

int main()
{
    int A = 0, B = 0;

    printf("Enter a number for A:");
    scanf("%d", &A);

    printf("Enter a number for B:");
    scanf("%d", &B);

    int difference = A - B;

    printf("A = %d, B = %d, difference = %d\n", A, B, difference);
    return 0;
}