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
	// ���� if(-2147483647-1 > 0) �� false�� �����Ѵ�. ������ if�ۿ��� define���� -2147483648�� out of int [ ���̳ʽ� operator + (int)2146483648 ] �� �ν��ؼ�
	// �����÷ο� ������ �������� ����ġ�� �����簡 �߻��Ѵ�.
	//�� �Ϲ� ������ �Ҵ� ���𹮿����� �������� �� �ִ밡 int�� 4����Ʈ�� �ϰڴ�.

	printf("%d", b);
	if (-2147483647 - 2 > 0) //-> but this is false , if �������� �Ϲ� �������� int�� ���ֹ��� �ʴ°� ����.
		b = 0;
		printf("\n%d", b);

		printf("-----------------------------------------");

		f = 0;








	(void)getchar();
}