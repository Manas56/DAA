#include<stdio.h>
void insertion_sort(int arr[],int n)
{
    int key;
    int count=0;
    for(int i=1;i<n;i++)
    {
        key=arr[i];
        int j=i-1;
        
        while(j>=0 && arr[j]>key)
        {
            count++;
                arr[j+1]=arr[j];
                j=j-1;
        }
        arr[j+1]=key;
    }
    printf("comparisons %d\n", count);
}

void print(int arr[],int n)
{
    for(int i=0;i<n;i++)
    {
        printf(" %d", arr[i]);
    }
}

int main()
{
    int size=0;
    printf("enter the number of elements\n");
    scanf("%d", &size);
    int arr[size];
    for(int i=0;i<size;i++)
    {
        scanf("%d", &arr[i]);
    }
    printf("----before insertion sort----\n");
    print(arr,size);
    printf("\n----after insertion sort----\n");
    insertion_sort(arr,size);
    print(arr,size);


}
