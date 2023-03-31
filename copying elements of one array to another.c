//to copy elements of array1 to array2
#include <stdio.h>
int main(){
    int i,j;
    int arr1[5],arr2[5];
    printf("enter array elements: \n");
    for(i=0;i<5;i++){
            scanf("%d",&arr1[i]);
    }
    for(i=0;i<5;i++){
            arr2[i]=arr1[i];
    }
    for(i=0;i<5;i++){
            printf("%d ",arr2[i]);
    }
    return 0;
}

