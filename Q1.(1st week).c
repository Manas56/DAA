#include<stdio.h>
int main()
{
    int size,count=0,key;
    int arr[size];
    printf("enter the array size\n");
    scanf("%d", &size);
    printf("enter the array elements\n");
    for(int i=0;i<size;i++)
    {
        scanf("%d", &arr[i]);
    }
    printf("enter the element to be searched\n");
    scanf("%d", &key);
    for(int i=0;i<size;i++)
    {
        count++;
        if(key==arr[i])
        {
            break;
        }
    }
    if(count!=0)
    {
        printf("entered key is found\n");
    }
    else
    {
        printf("key not found\n");
    }
    printf("number of comparisons: %d", count);
    return 0;
}
