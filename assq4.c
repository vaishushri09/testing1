// Write a ‘C’ Program to Check if a given String is Palindrome
#include<stdio.h>
#include<string.h>
int main(){
     char a[40];
     printf("enter string: ");
     gets(a);
     int d=strlen(a),c=0;
     for(int i=0;i<d;i++)
     {
       if(a[d-i-1]==a[i])
       {
         c=1;
       }  
     }
     if(c)
     {
        printf("palindrome");
     }
     else{
        printf("not palindrome");
     }

     return 0;
}