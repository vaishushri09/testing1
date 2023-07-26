// Write a ‘C’ program total Number of Words ,spaces and characters in the Sentence
#include<stdio.h>
#include<string.h>
int main(){
     char s[200];
    int count = 0, i;
 
    printf("Enter the string:");
    gets(s);
    for (i = 0;s[i] != '\0';i++)
    {
        if (s[i] == ' ' && s[i+1] != ' ')
            count++;    
    }
    printf("Number of words in given string are: %d\n", count + 1);

     return 0;
}   