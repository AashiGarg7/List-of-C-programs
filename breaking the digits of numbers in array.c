//to break the digits of numbers in array 
#include<stdio.h>
#include<limits.h>
int main(){
    int n1=0,n2;
    int arr[6]={23,18,99,56,15,63};
    for(int i=0;i<6;i++){
        while(arr[i]!=0){
            n1 = n1*10+arr[i]%10;
            arr[i]=arr[i]/10;
        }
        while(n1!=0){
            n2 = n1%10;
            n1 = n1/10;
            printf("%d ",n2);
        }
    }
    return 0;
}
