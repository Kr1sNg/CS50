#include <stdio.h>
#include <cs50.h>

int main(void)
{
	char c = get_char("Do you agree? ");
	if (c == 'y' || c == 'Y')  // == dau bang equal, || or, && and
	{
		printf("Agreed\n");
	}
	else if (c == 'n' || c == 'N')
	{
		printf("Disagreed\n");
	}
}
