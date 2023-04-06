//diff of second highest and smallest
//diff of second highest and smallest
#include<stdio.h>
#include<limits.h>
int main(){
    int len,max1,max2,min1,min2;
    int arr[]={1,5,7,90,45,120,82,10,22,56};
    len=sizeof(arr)/sizeof(int);
    max1 = INT_MIN; max2 = INT_MIN; min1 = INT_MAX; min2 = INT_MAX;
    for(int i=0;i<len;i++){
        if(arr[i]>max1){
            max2=max1;
            max1=arr[i];
        }
        else if (arr[i] > max2 && arr[i] != max1){
            max2 = arr[i];
        }
        if (arr[i]<min1){
            min2=min1;
            min1=arr[i];
        }
        else if (arr[i] < min2 && arr[i] != min1){
            min2 = arr[i];
        }
    }
    printf("%d %d", max2,min2);
    printf("\nThe diff between second highest and smallest is: %d",max2-min2);
    return 0;
}
