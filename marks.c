#include<stdio.h>
#include<string.h>
struct student
{
    char name[50];
    int roll;
    float marks;
}st[60];
void main()
{
    int i,n,rollno;
    float sum=0,avg;
    printf("enter the number of students\n");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        printf("enter the name of the student %d\n",i+1);
        scanf("%s",&st[i].name[0]);
        printf("enter te roll no of the student %d\n",i+1);
        scanf("%d",&st[i].roll);
        printf("enter the marks of the student %d\n",i+1);
        scanf("%f",&st[i].marks);
    }
    for ( i = 0; i < n; i++)
    {
        sum+=st[i].marks;
    }
    avg=sum/n;
    printf("The average marks of %d students is : %f\n",n,avg);
    printf("enter the roll no. of student\n");
    scanf("%d",&rollno);
    for(i=0;i<n;i++)
    {
        if(st[i].roll==rollno)
        {
            printf("The name of student is: %s\n",st[i].name);
            printf("The marks obtained by student is %f\n",st[i].marks);
            break;
        }
        else
            continue;
    }

    if(i==n)
        printf("Roll no. not found\n");
}
