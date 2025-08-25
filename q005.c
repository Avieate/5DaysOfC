// Q5: Write a program to convert temperature from Celsius to Fahrenheit.

/*
Sample Test Cases:
Input 1:
0
Output 1:
Fahrenheit=32

Input 2:
100
Output 2:
Fahrenheit=212

*/
#include <cs50.h>
#include <stdio.h>

int main(void)

{
    float c = get_float("Celcius: ");
    int f = (c * 9 / 5) + 32;
    {
        printf("Fahrenhieit=%i\n", f);
    }
}
