#include <stdio.h>


void meow(int n);


int main(void)   //void = ko lam gi
{
	{
		meow(3); //new unregisted fonction, need to set-up
	}
}
void meow(int n)
{
	for (int i = 0; i < n; i++)
	{
        printf("meow\n");
	}
}
