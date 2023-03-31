//to find smallest tand largest element in an array
#include <stdio.h>
int main(){
    int i,n,temp,puf;
    int arr[14]={1,2,45,78,90,451,23,11,102,308,650,21,34,909};
    temp = arr[0];
    puf = arr[2];
    for(i=0;i<14;i++){
        if(arr[i]<temp){
            temp=arr[i];
        }
        if(arr[i]>puf){
            puf=arr[i];
        }
    }
    printf("Smallest element is: %d\nLargest element is: %d",temp,puf);
    return 0;
}
