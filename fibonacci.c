/* ENE212-0262/2020
ACHOLA SHADRACK OWINO*/
#include <stdio.h>

void generateFibonacci(int n)
{
    int a = 0, b = 1, c;
    printf("Fibonacci Series up to %d: ", n);
    printf("%d, %d, ", a, b);

    c = a + b;
    while (c <= n)
    {
        printf("%d, ", c);
        a = b;
        b = c;
        c = a + b;
    }
    printf("\n");
}

int main()
{
    int n;
    printf("Enter the number to generate Fibonacci series up to: ");
    scanf("%d", &n);

    generateFibonacci(n);

    return 0;
}
