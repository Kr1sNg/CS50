#include <stdio.h>
#include <cs50.h>

int main(void)
{

	string answer = get_string("What's your name? ");

	printf("hello, %s\n", answer);
}


// comment in one line
 /* for running this code, we have to do
  *  <-- gcc helloname.c -o helloname -lcs50 --> */

