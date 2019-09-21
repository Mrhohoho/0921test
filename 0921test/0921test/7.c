#include <stdio.h>

void main()
{
	const float inch = 2.54;

	printf("input : ");
	int y;
	scanf("%d", &y);
	scanf("%*c");
	float result;
	result = y*inch;
	printf("%.2fcm", result);

	getchar();

















}