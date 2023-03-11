#include <stdio.h>
void swap(int *a, int *b)
{
    int temp = 0;
    temp = *a;
    *a = *b;
    *b = temp;
}
void sel_sort(int arr[],int size)
{
    for (int i = 0; i < size-1; i++)
    {
        int j, min=i;
        for (j=i; j < size-1; j++)
        {
            if (arr[min] > arr[j])
            {
                min = j;
            }
            swap(&arr[min], &arr[i]);
        }
    }
}
void print(int arr[],int size)
{
    for (int i = 0; i < size; i++)
    {
        printf(" %d", arr[i]);
    }
}
int main()
{
    int size = 0;
    printf("enter the size of array\n");
    scanf("%d", &size);
    int arr[size];
    printf("enter the elements of array\n");
    for (int i = 0; i < size; i++)
    {
        scanf("%d", &arr[i]);
    }
    printf("\nbefore sorting\n");
    print(arr,size);
    sel_sort(arr,size);
    printf("\nafter sorting\n");
    print(arr,size);
    return 0;
}
