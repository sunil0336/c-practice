#include<stdio.h>
int main(){
    int n;
    printf("N value\t");
    scanf("%d",&n);
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        printf("Enter arr\t");
        scanf("%d",&arr[i]);
    }
  for (int i = 0; i < n; i++)
  {
    for (int j = i+1; j < n; j++)
    {
        if(arr[i]>arr[j])
        {
        int temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp;
        }
    }
    
  }
  for(int j=0; j<n; j++) {
     printf(" %d",arr[j]);
  }
  
    return 0;
}