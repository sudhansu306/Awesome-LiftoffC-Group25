/*Program to find the smallest and largest element in an array*/
#include<stdio.h>
int main()
{
    int arr[100], n, i, small, large;

    printf("Enter the number of elements you want to insert : ");
    scanf("%d", &n);
    printf("Enter element of the array : ");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    small = arr[0];
    large = arr[0];
    for (i = 1; i < n; i++)
    {
        if (arr[i] < small)
        {
            small = arr[i];
        }

        if (arr[i] > large)
        {
            large = arr[i];
        }
    }
    printf("\nLargest element is : %d", large);
    printf("\nSmallest element is : %d", small);
    return 0;
}
