#include <stdio.h>

int main()
{
    // Nested While Loop
    // int i = 1;
    // while (i <= 5)
    // {
    //     int j = 1;
    //     while (j <= 6)
    //     {
    //         printf("%d ", j);
    //         j++;
    //     }
    //     printf("\n");
    //     i++;
    // }

    int i = 1;
    while (i <= 5)
    {
        int j = 1;
        while (j <= i)
        {
            printf("# ");
            j++;
        }
        printf("\n");
        i++;
    }
    return 0;
}