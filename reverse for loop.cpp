#include <stdio.h>
#include<string.h>
int main()
{
    char str[100],rev[100];
    int t ,i , j;
    printf("Enter string:");
    gets(str);   
    j = 0;
    t = strlen(str);
    rev[t] = '\0'; 
    for (i=t-1;i>=0;i--)
    {
	  rev[j++] = str[i];
    }
    rev[i] = '\0';
    printf("reversed string: %s",rev);  
    return 0;
}
