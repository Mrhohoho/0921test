#include <stdio.h>

void main()
{
	printf("Enter a floating-point value: ");
	float f =0.0;

	scanf("%f%*[\n]%*[^\n]",&f);
	printf("fixed-pint notation: %f\n",f);
	printf("exponential notation: %e\n",f);
	printf("what tha fuck si p notation anyway? : %a\n",f);

	(void)getchar();
	



}