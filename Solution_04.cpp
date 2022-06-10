#include <iostream>

void sortArray(int* arr, int n)
{
    int temp = 0;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n - 1; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}


int main()
{
	int arr[5] = { 5,2,4,8,3 }; 

	sortArray(arr, sizeof(arr)/ sizeof(int)); // 5, 20 / 4

    for (int i = 0; i < 5; i++)
    {
        printf("%d,", arr[i]);
    }


    return 0;
}