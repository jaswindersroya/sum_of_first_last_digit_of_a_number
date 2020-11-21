#include <stdio.h>
//WAP obtain the sum of the first and last digit of 6 digit number.
//formula : last_digit = number % 10
//      first_digit = number / 100000
int main()
{
    //delclare variables
    int number, last_digit,first_digit, sum;
    //input a number from user
    printf("enter a 6 digit number:");
    scanf("%d", &number);
    //compute last digit
    last_digit = number % 10;
    first_digit = number / 100000;
    //sum
    sum = last_digit+ first_digit;
    //display results
    printf("sum of first %d digit and last %d digit is %d",first_digit, last_digit,sum);
}
