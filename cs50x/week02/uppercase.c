// viet hoa
#include <cs50.h>
#include <stdio.h>
#include <string.h>  // to use function 'strlen'
#include <ctype.h>  // to use function 'toupper'

int main(void)
{
    string s = get_string("Before: ");
    printf("After:  ");
    for (int i = 0, n = strlen(s); i < n; i++)
    {
            printf("%c", toupper(s[i])); // hoac (s[i] - 32) hoac (s[i]-('a'-'A'))
        }
    printf("\n");
}
