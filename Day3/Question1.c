#include <stdio.h>
int n=7;//no. of elements in array at present
int *del_beg(int *arr){
    if(n==0)
    printf("No elements present");
    else {
        printf("Array before deletion: ");
        for(int i=0;i<n;i++)
            printf("%d ",arr[i]);
        for(int i=0;i<n-1;i++){
            arr[i]=arr[i+1];
        }
        n--;
        printf("\nArray after deletion: ");
        for(int i=0;i<n;i++)
            printf("%d ",arr[i]);
    }
    return arr;
}
int *del_at_index(int *arr){
    int index;
    printf("\nEnter the index where you want to delete:");
    scanf("%d",&index);
    if(n==0)
    printf("No elements present");
    else if(index>=n){
        printf("Index Invalid, there is no element at the given index to delete");
    }
    else {
        printf("Array before deletion: ");
        for(int i=0;i<n;i++)
            printf("%d ",arr[i]);
        for(int i=index;i<n-1;i++){
            arr[i]=arr[i+1];
        }
        n--;
        printf("\nArray after deletion: ");
        for(int i=0;i<n;i++)
            printf("%d ",arr[i]);
    }
    return arr;
}
int main()
{
    int arr[100]={8,17,2,56,74,14,3};
    int choice;
    printf("Choose the following options\n");
    printf("1. To del at beginning\n");
    printf("2. To del at an index specified by you\n");
    printf("Your Option:");
    scanf("%d",&choice);
    if(choice==1)
    del_beg(arr);
    else if(choice==2)
    del_at_index(arr);
    else 
    printf("Invalid Option");
    return 0;
}