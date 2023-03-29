//to check if number is armstrong or not for three digit number
#include<stdio.h>
int main(){
    int num,n1,n2;
    printf("Enter number: ");
    scanf("%d",&num);
    int temp = num;
    while(num!=0){
        n1 = num%10;
        num = num/10;
        n2 += n1*n1*n1;
    }
    if(temp==n2){
        printf("Armstrong Number");
    }
    else{
        printf("not armstrong Number");
    }
}