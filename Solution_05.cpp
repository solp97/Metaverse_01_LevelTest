#include <iostream>

int main()
{
	int num = 0;
	int num2 = 0;
	printf("�ִ밪 : ");
	scanf_s("%d", &num);
	printf("���� ���� :");
	scanf_s(" %d", &num2);
	int temp = 0;

	for (int i = 0; i < num2; i++)
	{

		printf("������ȣ�� = %d\n", rand()% num);
	}
	return 0;
}