#include <stdio.h>

// create a new fonction

void meow(void)
{       
        printf("meow\n");
}       


int main(void)   //void = ko lam gi
{
	for (int i = 0; i <3; i++)
	{
		meow(); //new unregisted fonction, need to set-up
	}
}

