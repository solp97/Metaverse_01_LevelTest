#include <iostream>

int main()
{

	int arr[5][5] = { 0 }; //5x5 배열
	int count = 0;
	int i = 0;
	int j = 0;

	while (count < 1) //1이 될때까지 무한
	{
		for (i = 0; i < 5; i++)
		{
			for (j = 0; j < 5; j++)
			{
				int random = rand() % 25;
				arr[i][j] = random;
				printf("%d ", arr[i][j]); //각 배열위치마다 랜덤값
			}
			printf("\n");
		}
		printf("현재 %d줄의 빙고가 완성되었습니다.\n", count);
		printf("숫자를 입력해 주세요 : ");
		int inputNum = 0;
		scanf_s("%d", inputNum);
		for (i = 0; i < 5; i++) //입력하면 0이 됨
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
