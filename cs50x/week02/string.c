// vo nghia, nhung giai thich cach dung cua strlen

#include <cs50.h>
#include <stdio.h>
#include <string.h>

int main(void)
{
    string s = get_string("Input:  ");
    printf("Output: ");
    for (int i = 0, n = strlen(s); i < n; i++) // dat bien i va n, cach nhau dau phay nen same type
    {
        printf("%c", s[i]);
    }
    printf("\n"); // xuong dong thoi
}
