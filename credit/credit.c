#include <stdio.h>

int main(void)
{
    unsigned long long number;
    printf("Number: ");
    scanf("%llu", &number);

    
    unsigned long long temp = number;
    int sum = 0;
    int position = 0;

    while (temp > 0)
    {
        int digit = temp % 10;

        if (position % 2 == 1)
        {
            int product = digit * 2;
            sum += product / 10;
            sum += product % 10;
        }
        else
        {
            sum += digit;
        }

        temp /= 10;
        position++;
    }

    
    if (sum % 10 != 0)
    {
        printf("INVALID\n");
        return 0;
    }

  
    int length = 0;
    temp = number;

    while (temp > 0)
    {
        length++;
        temp /= 10;
    }

    
    temp = number;

    while (temp >= 100)
    {
        temp /= 10;
    }

    int first_two = temp;
    int first_digit = first_two / 10;

    
    if (length == 15 && (first_two == 34 || first_two == 37))
    {
        printf("AMEX\n");
    }
    else if (length == 16 &&
             first_two >= 51 && first_two <= 55)
    {
        printf("MASTERCARD\n");
    }
    else if ((length == 13 || length == 16) && first_digit == 4)
    {
        printf("VISA\n");
    }
    else
    {
        printf("INVALID\n");
    }
}
