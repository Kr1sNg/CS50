//find the length of a string

#include <cs50.h>
#include <stdio.h>

int string_length(string s);
int main(void)
{
    string name = get_string("Name: ");
    int length = string_length(name);   // chay xong se ra = n
    printf("%i\n", length);
}

// dem ki tu cua string (goi string la s)
int string_length(string s)
{
    int n = 0;
    while (s[n] != '\0') // is that location equal to NUL(\0 or zero) character?
                            // because it's always in the end of the string
                            // it's like a signal for computer to know that it's the end
    {
        n++;
    }
    return n;
}


