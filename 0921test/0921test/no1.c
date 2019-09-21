//no1.c = which represent overflows of each data types
#include <stdbool.h>
#include <stdio.h>
void main()
{
	int i;
	float f;
	// int is 4 byte = 32 bits which mean it can hold 2^31 nums with sign flag. that is 2147483648 and we can assume its range is
	// btw (-2147483648 ~ 0 and 0~ +2147483647)

	i = 2147483647;
		printf("plus int %d\t%d\n",i,i+1);
		i = -2147483647 -1;
	printf("minus int %d\t%d\n", i, i - 1);
	bool b = (-2147483647-2 > 0); //-> this is true
	// 만일 if(-2147483647-1 > 0) 는 false로 리턴한다. 하지만 if밖에서 define시의 -2147483648은 out of int [ 마이너스 operator + (int)2146483648 ] 로 인식해서
	// 오버플로우 에러로 컴파일을 때려치는 대참사가 발생한다.
	//즉 일반 변수값 할당 선언문에서의 정수값은 그 최대가 int형 4바이트라 하겠다.

	printf("%d", b);
	if (-2147483647 - 2 > 0) //-> but this is false , if 문에서의 일반 정수값은 int에 구애받지 않는것 같다.
		b = 0;
		printf("\n%d", b);

		printf("-----------------------------------------");

		f = 0;








	(void)getchar();
}