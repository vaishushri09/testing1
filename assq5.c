// C Program to Convert Lowercase Characters by Uppercase and Vice-Versa
#include <stdio.h>
#include <string.h>
int main()
{   
    char s[100];
    int c, ch, i;
     printf("Enter a sentence :");
    gets(s);
     c=strlen(s);
    printf("The given sentence is   : %s", s);
    printf("\nCase changed sentence is: ");
    for (i = 0; i < c; i++)
    {
          if (s[i]>=65&&s[i]<=90)
        {
         s[i] = s[i] + 32;
        }
        else if (s[i] >= 97 && s[i] <= 122)
        {
         s[i] = s[i] - 32;
        }
    }
    puts(s);
    return 0;
}