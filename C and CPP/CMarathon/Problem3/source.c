#include <stdlib.h>
#include <stdio.h>
#include "header.h"

int countDigits(int number)
{ // Function to count digits
    if (number == 0)
    {
        return 0;
    }
    return 1 + countDigits(number / 10);
}

int reverse(int number)
{ // Function to reverse the number
    int rem;
    int rev = 0;
    while (number != 0)
    {
        rem = number % 10;
        rev = rev * 10 + rem;
        number /= 10;
    }
    return rev;
}

// Function to count sum of digits
int sumOfDigit(int number)
{ 
    int rem;
    int sum = 0;
    while (number != 0)
    {
        rem = number % 10;
        sum += rem;
        number /= 10;
    }
    return sum;
}

int puzzleAdv(int number)
{

    int cnt = countDigits(number); // number of digits
    int firstDigit, secondDigit;
    int ans = 0;

    printf("Count Dig %d \n",cnt);

    switch (cnt)
    {
    case 1:
        ans = number * number;
        break;
    case 2:
        firstDigit = number % 10;
        number /= 10;
        secondDigit = number % 10;

        ans = number - firstDigit + secondDigit;
        break;
    case 3:
        ans = reverse(number);
        break;

    default:
        ans = number % sumOfDigit(number);
        break;
    }

    return ans; // Final answer
}
