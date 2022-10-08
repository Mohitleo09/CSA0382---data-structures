#include<stdio.h>
#include<string.h>
int main()
{
    char str[30];
    printf("Enter your String:");
    scanf("%[^\n]",str);
    int i;
    printf("All the consonants in the string are:\n");
    for(i=0;i<strlen(str);i++)
    {
    if(str[i]=='a' || str[i]=='A' || str[i]=='e'|| str[i]=='E' || str[i]=='i'
       || str[i]=='I' || str[i]=='o' || str[i]=='O' || str[i]=='u' || str[i]=='U'|| str[i]==' ')
    {
     continue;
    }
    else
        printf("%c ",str[i]);
    }
}
