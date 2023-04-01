#include<stdio.h>
int main(){
    int i,k,n1,n2,size;
    printf("Enter size of array 1: ");
    scanf("%d",&n1);
    printf("Enter size of array 2: ");
    scanf("%d",&n2);
    int arr1[n1],arr2[n2];
    size = n1+n2;
    int arr3[size];
    printf("enter elements of array 1: ");
    for(i=0;i<n1;i++){
        scanf("%d",&arr1[i]);
    }
    printf("enter elements of array 2: ");
    for(i=0;i<n2;i++){
        scanf("%d",&arr2[i]);
    }
    for(i=0;i<n1;i++){
        arr3[i]=arr1[i];
    }
    k=i;
    for(i=0;i<n2;i++){
        arr3[k]=arr2[i];
        k++;
    }
    for(i=0;i<size;i++){
        printf("%d ",arr3[i]);
    }
    return 0;
}
