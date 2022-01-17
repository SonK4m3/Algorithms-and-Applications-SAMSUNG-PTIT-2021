#include <stdio.h>
#include <stdlib.h>


void InMang(int arr[], int n)
{
    int i;
    for (i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

void SapXepChon(int arr[], int n)
{
    int t=1;
    for (int i = 0; i < n - 1; i++)
    {

        int min = i;
        for (int j = i + 1; j < n; j++)
        {
            if (arr[j] < arr[min])
            {
                min = j;
            }
        }
         int temp = arr[min];
        arr[min] = arr[i];
        arr[i] = temp;
        if (i < n - 1)
        {   
            printf("Buoc %d: ",t++);
            InMang(arr, n);
        }
    }
}

int main()
{
    int n;
    scanf("%d", &n);
    int arr[100];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    SapXepChon(arr, n);
    return 0;
}
