// valid triangle has sides with positive length.
// the sum of the lengths of any two sides must be greater than the length of the third.

#include <cs50.h>
#include <stdio.h>

int main(void)
{
	float x = get_float("sides 1: ");
	float y = get_float("sides 2: ");
	float z = get_float("sides 3: ");

	if (x <= 0 || y <= 0 || z <= 0)
	{
		printf("False\n");
	}
	if (x + y <= z || y + z <= x || z + x <= y)
	{
		printf("False\n");
	}
	printf("True\n");

}
