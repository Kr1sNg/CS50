#include <cs50.h>
#include <stdio.h>

void print_row(int space, int bricksl, int gap, int brickr);
int main(void)
{
    int height;
    do
    {
        height = get_int("Height: ");
    }
    while (height <= 0 || height > 8);

    for (int x = 0; x < height; x++) // in khoi
    {
        print_row(height - (x + 1), (x + 1), 2, (x + 1)); // in tu tren xuong
    }
}

void print_row(int space, int bricksl, int gap, int brickr) // in hang
{
    for (int s = 0; s < space; s++)
    {
        printf(" ");
    }
    for (int bl = 0; bl < bricksl; bl++)
    {
        printf("#");
    }
    for (int g = 0; g < gap; g++)
    {
        printf(" ");
    }
    for (int br = 0; br < brickr; br++)
    {
        printf("#");
    }
    printf("\n");
}
