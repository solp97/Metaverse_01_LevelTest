#include <iostream>

void sortArray(int* arr, int n)// 배열 정렬
{
    int temp = 0;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n - 1; j++)
        {
            if (arr[j] > arr[j + 1]) //크면 뒤로 작으면 앞으로
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

	sortArray(arr, 5);

    for (int i = 0; i < 5; i++)
    {
        printf("%d,", arr[i]);
    }


    return 0;
}
