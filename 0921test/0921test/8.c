#include <stdio.h>

void main()
{
	const float inch = 2.54;

	printf("input cups : ");
	int y;
	scanf("%d", &y);
	scanf("%*c");
	float result;
	printf("pint: %.2f ounce: %d tablespone: %d teaspoon: %d",y/2.0,8*y,2*8*y,3*2*8*y);

	getchar();

















}