#include <stdio.h>

int main()
{
    int arr[5];
    int min = arr[0];
    int max = arr[0];

    for (int i = 0; i < 5; i++)
    {
        printf("entre the number");
        scanf("%d", &arr[i]);
    }

    for (int i = 0; i < 5; i++)
    {
        if (min>arr[i])
        {
            min = arr[i];
        }
        
    }

        for (int i = 0; i < 5; i++)
    {
        if (max<arr[i])
        {
            max = arr[i];
        }
        
    }

    printf("min: %d", min);

    printf("max: %d", max);
    
    return 0;
}