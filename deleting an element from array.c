#include <stdio.h>
int main()
{
    int arr[100];
    int size,n,pos;
    scanf("%d",&size);
    for(int i=0;i<size;i++){
        scanf("%d",&arr[i]);
    }
    printf("enter the position: ");
    scanf("%d",&pos);
    for(int i=pos-1;i<size-1;i++){
        arr[i]=arr[i+1];
    }
    for(int i=0;i<size-1;i++){
        printf("%d ",arr[i]);
    }
    return 0;
}
