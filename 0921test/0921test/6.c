#include <stdio.h>

void main()
{
	const float mol = 3.0e-23;
	const int qat = 950;

	printf("input : ");
	int y;
	scanf("%d",&y);
	scanf("%*c");
	float result;
	result = y * qat / mol;
	
	
	printf("%.0f", result);

	getchar();

















}