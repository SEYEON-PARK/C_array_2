#include <stdio.h>

int main(void)
{
	char a[100]; //99���� ���� �Է� ����!(������ 1���� NULL�� ���� ��.)

	printf("�����ϴ� ������ �Է��Ͻÿ�. : ");
	scanf_s("%[^\n]s", a, sizeof(a)); //������� �����Ͽ� ���ڿ� �Է¹ޱ�

	printf("�Է��Ͻ� ������ '%s'�Դϴ�.\n", a);

	return 0;
}