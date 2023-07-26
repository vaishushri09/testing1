// Write a ‘C’ program to C’ program to Find ASCII values of All Characters in a given String 
#include<stdio.h>
#include<string.h>
int main(){
     char srr[40];
     printf("enter the str :");
     gets(srr);
     int d,i=0,f;
     d=strlen(srr);
     while(d--)
     {
        f=srr[i];
        printf("the ascii value of %c is %d.\n",srr[i],f);
        i++;
     }
     return 0;
}