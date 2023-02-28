#include<stdio.h>
#include<math.h>
void main()
{
    int i,n,x,y;
    printf("Enter the no\n");
    scanf("%d",&n);
    for(i=2;i<=sqrt(n);i++)
    {
        if(n%i==0)
        {
        x=1;
        break;
        }
        else
        x=0;
    }
    if(x==1)
    {
        printf("The no is not prime\n");
    }
    else if(x==0)
    {
        printf("The no is prime\n");
    }
}