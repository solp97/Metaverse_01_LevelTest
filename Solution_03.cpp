#include <iostream>

void main()
{
    for (int i = 0; i <= 4; i++) 
    {
        for (int k = 4; k >= i; k--)
        {
            printf(" ");
        }

        for (int k = 1; k <= i; k++)
        {
            printf("*");
        }

        for (int j = 0; j <= i; j++) 
        {
            printf("*");
        }

        printf("\n");
    }
}