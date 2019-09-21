//no2.c , 2nd file
/*

%10[^\n]%*[^\n]  10개 char untile 엔터, 단 이 엔터는 버퍼에 남아있으므로 뒤의 %*[^\n]이 이를 잡아먹고 종료한다 

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
	// 중요 : 선언된 변수 type하고 scanf의 포멧 specifier가 일치하지 않으면 에러가 나옴.
	//따라서 변수 선언을 int로 하고 이를 숫자로 받은 다음 이 int값을 char로 출력하는 방법밖에 답이 없음. <-> char 선언하고 %d로 스캔하면 안됨.
	//scanf("%[^\n]d",&c);  <- does not fucking work. cause : [ The scanset working with only characters. ]
	scanf("%3d%*[^\n]", &c);
	//printf("%d\n",c);
	printf("%c",c);


	(void)getchar();



}