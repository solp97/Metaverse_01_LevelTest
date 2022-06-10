#include <iostream>
#include <string>
#include <time.h>
int main()
{
	srand(time(NULL));

	std::string arr[] = { "Joker", "¢»", "¢¿", "¢½" , "¡Þ" };
	std::string arr2[] = { "2","3","4","5","6","7","8","9","10","A", "Q", "J", "K" };
	printf("Player 1: ");
	for (int i = 0; i < 7; i++)
	{
		printf(" %c %c", arr[rand() % 5], arr2[rand() % 13]);

	}
	printf("\n");
	printf("Player 2: ");
	for (int i = 0; i < 7; i++)
	{
		printf(" %s %s", arr[rand() % 5], arr2[rand() % 13]);
	}
}
