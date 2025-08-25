// Q4: Write a program to calculate the area and circumference of a circle given its radius.

/*
Sample Test Cases:
Input 1:
7
Output 1:
Area=153.94, Circumference=43.96

Input 2:
3
Output 2:
Area=28.27, Circumference=18.85

*/
#include <math.h>
#include <stdio.h>

// Using math.h library, the value of Pi can be defined. I'm only writing it up to 3.14
// as that's what the examples seem to be using.
#define M_PI 3.14

int main(void)

{
    float r;

    do
    {
        printf("Radius: ");
        scanf("%f", &r)
    }
    while (r < 0);

    {
        printf("Area=%.2f, Circumference=%.2f\n", M_PI * pow(r, 2), 2 * M_PI * r);
    }
}
