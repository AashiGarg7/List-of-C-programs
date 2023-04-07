#include <stdio.h>
int main()
{
    int arr[100];
    int size,n,pos;
    scanf("%d",&size);
    for(int i=0;i<size;i++){
        scanf("%d",&arr[i]);
    }
    printf("enter the no: ");
    scanf("%d",&n);
    printf("enter the position: ");
    scanf("%d",&pos);
    size=size+1;
    for(int i=size-1;i<=pos;i--){
        arr[i]=arr[i-1];
    }
    arr[pos-1]=n;
    for(int i=0;i<size;i++){
        printf("%d ",arr[i]);
    }
    return 0;
}
