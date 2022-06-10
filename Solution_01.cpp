#include <iostream>

void swap(int* a, int* b)
{
	int temp = 0;

	temp = *a;
	*a = *b;
	*b = temp;

}
void swap(int& a, int& b)
{
	int temp = 0;

	temp = a;
	a = b;
	b = temp;

}

int main()
{
	int a = 14;
	int b = 66;
	swap(a, b);
	printf("%d,%d",a,b);

	return 0;
}