// Write a ‘C’ program to Find the Length of a String without using the library Function
#include<stdio.h>
#include<string.h>
int main(){
     char s[40];
     printf("enter string :");
     gets(s);
     int i=0;
     while(s[i]!='\0')
     {
        i++;
     }
    printf("the length of %s is %d",s,i);
     return 0;
}