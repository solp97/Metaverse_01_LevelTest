#include <iostream>

int main()
{
	int num = 0;
	int num2 = 0;
	printf("ÃÖ´ë°ª : ");
	scanf_s("%d", &num);
	printf("»ý¼º °¹¼ö :");
	scanf_s(" %d", &num2);
	int temp = 0;

	for (int i = 0; i < num2; i++)
	{

		printf("»ÌÈù¹øÈ£´Â = %d\n", rand()% num);
	}
	return 0;
}