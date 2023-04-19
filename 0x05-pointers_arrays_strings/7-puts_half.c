#include <stdio.h>
#include <stdlib.h>

#define MAX_SIZE 100

int sum(int arr[], int n);
int main(void);

int sum(int arr[], int n)
{
    int i, sum = 0;
    for (i = 0; i < n; i++) {
        sum += arr[i];
    }
    return sum;
}

int main(void)
{
    int i, n, arr[MAX_SIZE], sum_arr;
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);
    printf("Enter %d elements: ", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    sum_arr = sum(arr, n);
    printf("Sum of array elements = %d\n", sum_arr);
    return EXIT_SUCCESS;
}

