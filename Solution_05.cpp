#include <iostream>

int main() //입력값 랜덤생성
{
	int num = 0;
	int num2 = 0;
	printf("최대값 : ");
	scanf_s("%d", &num);
	printf("생성 갯수 :");
	scanf_s(" %d", &num2);
	// int temp = 0;//똑같은값 방지용

	for (int i = 0; i < num2; i++)//출력
	{
		printf("뽑힌번호는 = %d\n", rand()% num);
	}
	return 0;
}
