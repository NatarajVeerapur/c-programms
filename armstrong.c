#include<stdio.h>  
void main()    
{    
int n,x,sum=0,temp;    
printf("enter the number\n");    
scanf("%d",&n);    
temp=n;    
while(n>0)    
{    
x=n%10;    
sum=sum+(x*x*x);    
n=n/10;    
}    
if(temp==sum)    
printf("Armstrong  number\n");    
else    
printf("NO, its not Armstrong number\n"); 
}   