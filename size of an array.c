//to find size of an array
#include <stdio.h>
int main(){
    int i,len;
    int arr[]={1,2,45,78,90,451,23,11,102,78,308,650,21,34,909};
    len = sizeof(arr)/sizeof(int);    //or sizeof(arr)/sizeof(arr[0])
    printf("%d",len);
    return 0;
}