#include <stdio.h>

// scanf -> % ���ϵ�ī�� spesifier ����  asfasd?FSDADSAF???   -> % [*] [width] [length] specifier

void main()
{

	char c[100] = "";
	char b = 33;
	//int print = 0;
	printf("write the code\n note that ascii(stands for america standard code for information interchange) is 1 through 127\n");
	//scanf("%*[\n]%[^\n]c",c);
	//scanf("%[^5]s%*[^\n]s",c);
	//scanf("%[^\n]s%*[^random]",c);
	//scanf("%d", c);
	// �߿� : ����� ���� type�ϰ� scanf�� ���� specifier�� ��ġ���� ������ ������ ����.
	//���� ���� ������ int�� �ϰ� �̸� ���ڷ� ���� ���� �� int���� char�� ����ϴ� ����ۿ� ���� ����. <-> char �����ϰ� %d�� ��ĵ�ϸ� �ȵ�.
	//scanf("%[^\n]d",&c);  <- does not fucking work. cause : [ The scanset working with only characters. ]
	//scanf("%3d%*[^\n]", &c);
	//printf("%d\n",c);
	//scanf("%s[^\n]%*c",c);
	scanf("%100[^\n]%d", c,&b);
	//% 10[^ \n] % *[^ \n]
	printf("->%s<-\n->%c<-", c,b);


	(void)getchar();



}