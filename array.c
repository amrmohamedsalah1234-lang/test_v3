#include <stdio.h>

void findMax(int arr[], int n);
void findMin(int arr[], int n);
void findSecondLargest(int arr[], int n);
void printEven(int arr[], int n);
void printOdd(int arr[], int n);
void printSum(int arr[], int n);
void printReverse(int arr[], int n);

int main()
{
    int arr[100], n, i;

    printf("Enter the number of elements: ");
    scanf("%d", &n);

    printf("Enter %d elements:\n", n);
    for(i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    findMax(arr, n);
    findMin(arr, n);
    findSecondLargest(arr, n);
    printEven(arr, n);
    printOdd(arr, n);
    printSum(arr, n);
    printReverse(arr, n);

    return 0;
}

void findMax(int arr[], int n)
{
    int i, max = arr[0];

    for(i = 1; i < n; i++)
    {
        if(arr[i] > max)
            max = arr[i];
    }

    printf("Maximum value = %d\n", max);
}

void findMin(int arr[], int n)
{
    int i, min = arr[0];

    for(i = 1; i < n; i++)
    {
        if(arr[i] < min)
            min = arr[i];
    }

    printf("Minimum value = %d\n", min);
}

void findSecondLargest(int arr[], int n)
{
    int i, max = arr[0], second = arr[0];

    for(i = 1; i < n; i++)
    {
        if(arr[i] > max)
            max = arr[i];
    }

    second = arr[0];

    for(i = 0; i < n; i++)
    {
        if(arr[i] > second && arr[i] < max)
            second = arr[i];
    }

    printf("Second largest value = %d\n", second);
}

void printEven(int arr[], int n)
{
    int i;

    printf("Even numbers are: ");
    for(i = 0; i < n; i++)
    {
        if(arr[i] % 2 == 0)
            printf("%d ", arr[i]);
    }
    printf("\n");
}

void printOdd(int arr[], int n)
{
    int i;

    printf("Odd numbers are: ");
    for(i = 0; i < n; i++)
    {
        if(arr[i] % 2 != 0)
            printf("%d ", arr[i]);
    }
    printf("\n");
}

void printSum(int arr[], int n)
{
    int i, sum = 0;

    for(i = 0; i < n; i++)
    {
        sum += arr[i];
    }

    printf("Sum of array = %d\n", sum);
}

void printReverse(int arr[], int n)
{
    int i;

    printf("Reverse array: ");
    for(i = n - 1; i >= 0; i--)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
}