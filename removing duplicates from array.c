//removing duplicates
#include<stdio.h>
int main(){
    int arr[] = {1,5,40,2,5,78,65,1,1,2,30,68,30};
    int len = sizeof(arr)/sizeof(int);
    for(int i=0;i<len;i++){
        for(int j=i+1;j<len;j++){
            if(arr[j]==arr[i]){
                for(int k=j;k<len;k++){
                    arr[k]=arr[k+1];
                }
                len--;
                j--;
            }
        }
    }
    for(int i=0;i<len;i++){
        printf("%d ",arr[i]);
    }
    return 0;
}