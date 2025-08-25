// Q3: Write a program to calculate the area and perimeter of a rectangle given its length and
// breadth.

/*
Sample Test Cases:
Input 1:
5 10
Output 1:
Area=50, Perimeter=30

Input 2:
3 7
Output 2:
Area=21, Perimeter=20

*/
#include <cs50.h>
#include <stdio.h>

int main(void)

{
    int l, b;

    do
    {
        printf("Length: ");
        scanf("%i", l);
    }
    while (l < 0);

    do
    {
        printf("Breadth: ");
        scanf("%i", b);
    }
    while (b < 0);

    {
        printf("Area=%i, Perimeter=%i\n", l * b, 2 * (l + b));
    }
}
