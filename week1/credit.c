#include <cs50.h>
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    long num = get_long("Number: ");
    string type = "INVALID";
    long num_copy = num;

    long digit;
    long sum = 0;
    int count = 1;
    int even = 2;

    while (num > 0)
    {

        digit = num%10;
        num /= 10;

        if (count == even)
        {
            digit *= 2;

            if (digit > 9)
            {
                if (digit == 10)
                {
                    sum += 1;
                }
                else if (digit == 12)
                {
                    sum += 3;
                }
                else if (digit == 14)
                {
                    sum += 5;
                }
                else if (digit == 16)
                {
                    sum += 7;
                }
                else
                {
                    sum += 9;
                }
            }
            else
            {
                sum += digit;
            }

            even+=2;
        }
        else
        {
            sum += digit;
        }

        count++;
    }

    int length = count-1;
    long d;

    if (sum%10 == 0)
    {
        if (length == 13)
        {
            for (int i = 0; i < 13; i++)
            {
                d = num_copy%10;
                num_copy/=10;

                if (i == 12 && d == 4)
                {
                    type = "VISA";
                }
                else
                {
                    type = "INVALID";
                }
            }
        }

        else if (length == 15)
        {
            bool isAmerican1;
            bool isAmerican2;

            for (int i = 0; i < 15; i++)
            {
                d = num_copy%10;
                num_copy/=10;

                if (i == 13)
                {
                    if (d == 4 || d == 7)
                    {
                        isAmerican1 = true;
                    }
                }

                if (i == 14 && d == 3)
                {
                    isAmerican2 = true;
                }
            }

            if (isAmerican1 && isAmerican2)
            {
                type = "AMEX";
            }
            else
            {
                type = "INVALID";
            }
        }

        else if (length == 16)
        {

            bool isMaster1;
            bool isMaster2;

            for (int i = 0; i < 16; i++)
            {

                d = num_copy%10;
                num_copy/=10;

                if (i == 14)
                {
                    if (d == 1 || d == 2 || d == 3 || d == 4 || d == 5)
                    {
                        isMaster1 = true;
                    }
                }

                if (i == 15)
                {
                    if (d == 5)
                    {
                    isMaster2 = true;
                    }
                    else if (d == 4)
                    {
                        type = "VISA";
                    }
                    else
                    {
                        type = "INVALID";
                    }
                }
            }

            if (isMaster1 && isMaster2)
            {
                type = "MASTERCARD";
            }

        }
        else
        {
            type = "INVALID";
        }
    }
    else
    {
        type = "INVALID";
    }

    printf("%s\n",type);

}


