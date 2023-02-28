#include <stdio.h>
void main()
{
	int x,y,z, largest;

	printf("Enter three numbers\n");
	scanf("%d %d %d",&x,&y,&z);

	largest = x > y ? (x > z ? x : z) : (y > z ? y : z);

	printf("%d is the largest number.\n", largest);

}