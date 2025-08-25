// Q1: Write a program to input two numbers and display their sum.

/*
Sample Test Cases:
Input 1:
3 4
Output 1:
Sum = 7

Input 2:
-1 20
Output 2:
Sum = 19

*/

#include <cs50.h>
#include <stdio.h>

int main(void)

{
    float x = get_int("First Number: ");
    float y = get_int("Second Number: ");
    {
        printf("Sum = %g\n", x + y);
    }
}
