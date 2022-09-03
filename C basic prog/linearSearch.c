#include<stdio.h>

int search(int arr[], int size, int element)
{

    for (int i = 0; i < size; i++)
    {
        if(arr[i]==element)
        {
            return i;
        }
    }
    return -1;  

}
int main()
{
    int element;
    int arr[]={4,2,1,2,5,6,7,9,0,8,6};
    int size = sizeof(arr)/sizeof(int);
    printf("Enter element: ");
    scanf("%d",&element);
    int index = search( arr, size, element);
    if(index!=-1)
    {
    printf("your element %d is fount in array at index %d",element,index);
    }
    else
    {
    printf("element not found");
}
    printf("\nSize is: %d",size);
    return 0;
}