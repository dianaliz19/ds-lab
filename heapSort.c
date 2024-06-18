#include <stdio.h>
void swap(int* a, int* b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}
void heapify(int arr[], int N, int i)
{
    int larg = i;
    int lc = 2 * i + 1;
    int rc = 2 * i + 2;
    if (lc < N && arr[lc] > arr[larg])
        larg = lc;
    if (rc < N && arr[rc] > arr[larg])
        larg = rc;
    if (larg!= i)
    {
        swap(&arr[i], &arr[larg]);
        heapify(arr, N, larg);
    }
}
void Buildheap(int arr[],int N)
{
    for (int i = N / 2 - 1; i >= 0; i--)
        heapify(arr, N, i);
}
void heapSort(int arr[], int N)
{
    Buildheap(arr,N);
    for (int i = N - 1; i >= 0; i--)
    {
        swap(&arr[0], &arr[i]);
        heapify(arr, i, 0);
    }
}
void printArray(int arr[], int N)
{
    for (int i = 0; i < N; i++)
        printf("%d ", arr[i]);
    printf("\t");
}
int main()
{
    int arr[10],N,i;
    printf("Input number of elements: ");
    scanf("%d", &N);
    printf("\nInput array values one by one : ");
    for (i = 0; i < N; i++)
        scanf("%d", &arr[i]);
    heapSort(arr, N);
    printf("Sorted array is : ");
    printArray(arr, N);
}

/*OUTPUT
 
Input number of elements: 6
Input array values one by one : 12 11 13 5 6 7

Sorted array is : 5 6 7 11 12 13
*/