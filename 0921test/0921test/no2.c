//no2.c , 2nd file
/*

%10[^\n]%*[^\n]  10�� char untile ����, �� �� ���ʹ� ���ۿ� ���������Ƿ� ���� %*[^\n]�� �̸� ��Ƹ԰� �����Ѵ� 

"%* [\n] % [^\n]" <-it will read the interesting data from a text file into a string.


ref : https://medium.com/@zoha131/fun-with-scanf-in-c-3d7a8d310229

*/
#include <stdio.h>

void main()
{

	int c = 0;
	//int print = 0;
	printf("write the code\n note that ascii(stands for america standard code for information interchange) is 1 through 127\n");
	//scanf("%*[\n]%[^\n]c",c);
	//scanf("%[^5]s%*[^\n]s",c);
	//scanf("%[^\n]s%*[^random]",c);
	//scanf("%d", c);
	// �߿� : ����� ���� type�ϰ� scanf�� ���� specifier�� ��ġ���� ������ ������ ����.
	//���� ���� ������ int�� �ϰ� �̸� ���ڷ� ���� ���� �� int���� char�� ����ϴ� ����ۿ� ���� ����. <-> char �����ϰ� %d�� ��ĵ�ϸ� �ȵ�.
	//scanf("%[^\n]d",&c);  <- does not fucking work. cause : [ The scanset working with only characters. ]
	scanf("%3d%*[^\n]", &c);
	//printf("%d\n",c);
	printf("%c",c);


	(void)getchar();



}