#include<stdio.h>
int main(){
    int arr[] = {1,5,40,2,5,78,65,1,1,2,30,68,30};
    int len = sizeof(arr)/sizeof(int);
    int count;
    for(int i=0;i<len;i++){
        count=0;
        for(int j=i+1;j<len;j++){
            if(arr[j]==arr[i]){
                count++;
            }
        }
        if(count==1){
            printf("%d ",arr[i]);
        }
    }
    return 0;
}