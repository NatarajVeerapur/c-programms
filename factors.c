#include<stdio.h>
void main() 
{
    int n,i;
    printf("Enter a number\n");
    scanf("%d",&n);
    printf("Factors of %d are: %d ",n,n);
    for (i = 1; i<=n/2; i++) 
    {
        if (n%i == 0) {
            printf("%d ",i);
        }
    }
}
