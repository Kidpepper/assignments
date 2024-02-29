/*ENE212-0262/2020
ACHOLA SHADRACK OWINO*/
#include <stdio.h>
#include <math.h>

int countDigits(int n)
{
    int count = 0;
    while (n != 0)
    {
        n /= 10;
        count++;
    }
    return count;
}

int isArmstrong(int n)
{
    int numDigits = countDigits(n);
    int originalNumber = n;
    int sum = 0;

    while (n != 0)
    {
        int digit = n % 10;
        sum += pow(digit, numDigits);
        n /= 10;
    }

    if (sum == originalNumber)
        return 1;
    else
        return 0;
}

int main()
{
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);

    if (isArmstrong(n))
        printf("%d is an Armstrong number.\n", n);
    else
        printf("%d is not an Armstrong number.\n", n);

    return 0;
}
