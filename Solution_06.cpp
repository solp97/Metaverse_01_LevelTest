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
		printf("현재 %d줄의 빙고가 완성되었습니다.\n", count);
		printf("숫자를 입력해 주세요 : ");
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