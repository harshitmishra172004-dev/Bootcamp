#include <stdio.h>
#include <stdlib.h>

int main()
{
    int count = 0;
    int i;
    char str[50];
    printf("Enter a string:");
    fgets(str, sizeof(str), stdin);
    for (int i = 0; str[i] != '\0'; i++)
    {
        char ch = str[i];
        if ((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z'))
        {
            if (!(ch == 'A' || ch == 'a' || ch == 'E' || ch == 'e' || ch == 'I' || ch == 'i' || ch == 'O' || ch == 'o' || ch == 'U' || ch == 'u'))
            {
                count++;
            }
        }
    }
    printf("%d", count);
    return 0;
}