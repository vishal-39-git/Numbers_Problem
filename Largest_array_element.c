#include<stdio.h>

int returnMax(int arr[],int size)
{
    int max=0;

    for(int i=0;i<=size;i++)
    {
        if(max < arr[i])
        {
            max = arr[i];
        }
    }
    return max;
}

int main()
{
    int arr[50],size;

    printf("How many numbers you want to enter in the array\n ");
    scanf("%d",&size);

    printf("Enter the elements\n");
    for(int i=0; i<size;i++)
    {
        scanf("%d",&arr[i]);
    }
    int max = returnMax(arr,size);

    printf("max number in this array is %d\n",max);
    return 0;
}