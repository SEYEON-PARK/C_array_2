#include <stdio.h>

int main(void)
{
	char a[100]; //99개의 문자 입력 가능!(마지막 1개는 NULL이 들어가야 함.)

	printf("좋아하는 문장을 입력하시오. : ");
	scanf_s("%[^\n]s", a, sizeof(a)); //공백까지 포함하여 문자열 입력받기

	printf("입력하신 문장은 '%s'입니다.\n", a);

	return 0;
}