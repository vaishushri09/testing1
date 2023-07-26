// . Write a ‘C’ program to Find occurrence Character in a String
#include<stdio.h>
int main(){
      char s[100],c;  
    int i,count=0;
     printf("Enter  the string : ");
    gets(s);
    printf("Enter character to be searched: ");
    c=getchar();
    
    for(i=0;s[i];i++)  
    {
    	if(s[i]==c)
    	{
          count++;
		}
 	}   
	printf("character '%c' occurs %d times \n ",c,count);
      return 0;
}