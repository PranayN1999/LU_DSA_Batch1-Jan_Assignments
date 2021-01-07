#include <stdio.h>

int main()
{
    int arr[7]={1,2,3,4,5,6,7};
    int n=7;//size of the array
    int k;
    printf("Enter the no. of rotations:");
    scanf("%d",&k);//To get the no. of rotations
    for(int i=1;i<=k;i++)
    {
        int t=arr[0];
        for(int j=1;j<n;j++){
            arr[j-1]=arr[j];
        }
        arr[n-1]=t;//rotating the first element to last
    }
    for(int i=0;i<n;i++)
    printf("%d ",arr[i]);

    return 0;
}