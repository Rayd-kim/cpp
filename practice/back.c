#include <stdio.h>

int main(void)
{
    int N;
    int arr[10001] = {0};
    int temp;

    scanf("%d", &N);
    for (int i = 0; i < N; i++)
    {
        scanf("%d", &temp);
        arr[temp] += 1;
    }

    for (int i = 0; i < 10001; i++)
        for (int j = 0; j < arr[i]; j++)
            printf("%d\n", i);
    return (0);
}