#include<stdio.h>
void main()
{
char x;
printf("Enter a letter\n");
scanf("%c",&x);
    if(x=='a'||x=='A'||x=='e'||x=='E'||x=='i'||x=='I'||x=='o'||x=='O'||x=='u'||x=='U')
    {
        printf("The entered letter is vowel\n");
    }
    else
    {
        printf("The entered letter is consonent\n");
    }
}