#include <stdio.h>

void main()
{
	printf("input y : ");
	int y;
	scanf("%d",&y);
	scanf("%*c");
	y = y * 3.156e7;
	printf("result is %d sec", y);
	(void)getchar();
}