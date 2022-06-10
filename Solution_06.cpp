#include <iostream>
#include <string>
#include <time.h>
int main()
{
	srand(time(NULL)); //시간대로 흐르는 랜덤

	std::string arr[] = { "Joker", "¢»", "¢¿", "¢½" , "¡Þ" };//특수문자 및 스트링
	std::string arr2[] = { "2","3","4","5","6","7","8","9","10","A", "Q", "J", "K" }; //문자왜 안나와
	printf("Player 1: "); //플레이어1
	for (int i = 0; i < 7; i++)
	{
		printf(" %c %c", arr[rand() % 5], arr2[rand() % 13]); //랜덤

	}
	printf("\n");
	printf("Player 2: "); //플레이어2
	for (int i = 0; i < 7; i++)
	{
		printf(" %s %s", arr[rand() % 5], arr2[rand() % 13]); //
	}
}
