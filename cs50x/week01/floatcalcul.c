#include <stdio.h>
#include <cs50.h>

int main(void)
{
	int x = get_int("x: ");
	int y = get_int("y: ");

	float z = (float) x / (float) y; 
	// double z = (double) x / (double) y; if we need more memory to calculate.
	printf("%.10f\n", z); //lay 10 so sau dau phay
}
