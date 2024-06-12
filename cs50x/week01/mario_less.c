#include <cs50.h>
#include <stdio.h>

void print_row(int space, int bricks);

int main(void)
{
    // Prompt the user for the pyramid's height
    int n;
    do
    {
        n = get_int("Height: ");
    }
    while (n < 1); // phai nhap n
    // Print a pyramid of that height
    for (int i = 0; i < n; i++)
    {
        // Print row of space and bricks
        print_row(n - (i + 1), i + 1);
    }
}

void print_row(int space, int bricks)
{
    // print space
    for (int i = 0; i < space; i++)
    {
        printf(" ");
    }
    // print bricks
    for (int i = 0; i < bricks; i++)
    {
        printf("#");
    }
    printf("\n");
}
