#include <iostream>

int main()
{

	int arr[5][5] = { 0 };
	int count = 0;
	int i = 0;
	int j = 0;

	while (count < 1)
	{

		for (i = 0; i < 5; i++)
		{


			for (j = 0; j < 5; j++)
			{
				int random = rand() % 25;
				arr[i][j] = random;
				printf("%d ", arr[i][j]);

			}
			printf("\n");
		}
		printf("���� %d���� ���� �ϼ��Ǿ����ϴ�.\n", count);
		printf("���ڸ� �Է��� �ּ��� : ");
		int inputNum = 0;
		scanf_s("%d", inputNum);
		for (i = 0; i < 5; i++)
		{
			for (j = 0; j < 5; j++)
			{
				if (arr[i][j] == inputNum)
				{
					arr[i][j] = 0;
				}
			}
		}
		count++;
	}
}