#include <stdio.h>
#include <cs50.h>

bool prime(int numbermintomax);

int main(void)
{
	int min;
	do
	{
		min = get_int("Minimum: ");
	}
	while (min < 1);  //min < 1 thi vong lap tiep tuc hoi Minimum:
	
	int max;
	do
	{
		max = get_int("Maximum: ");
	}
	while (min >= max); //neu nhap min>=max vong lap tiep tuc hoi
			    //cho den khi nhap dung min<max
	
	for (int i = min; i <= max; i++)
	{
		if (prime(i))
		{
			printf("%i\n", i); //print only prime numbers in range
					   //return true moi dc print
		}
	}
}

bool prime(int numbermintomax)
{
	if (numbermintomax < 2) //<2 thi k phai so nguyen to
	{
		return false;
	}

	int a;
	for (a = 2; a < numbermintomax; a++)
	{
		if (numbermintomax % a == 0)
		{
		return false;
		}
	}
	return true;
}
