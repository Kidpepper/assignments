/* ENE212-0262/2020
ACHOLA SHADRACK OWINO*/
#include <stdio.h>


int isPalindrome(int n)
{
    int reversed = 0, original = n;

    while (n > 0)
    {
        int remainder = n % 10;
        reversed = reversed * 10 + remainder;
        n /= 10;
    }

    if (original == reversed)
        return 1;
    else
        return 0;
}

int main()
{
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);

    if (isPalindrome(n))
        printf("%d is a palindrome.\n", n);
    else
        printf("%d is not a palindrome.\n", n);

    return 0;
}
