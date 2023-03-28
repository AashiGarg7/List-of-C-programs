//To tell Palindrome number or not
#include<stdio.h>
int main(){
    int num,n1=0,n;
    printf("Enter number: ");
    scanf("%d",&num);
    n=num;
    while(num!=0){
        n1 = n1*10 + num%10;
        num = num/10;
    }
    if(n1==n){
        printf("Palindrome number");
    }
    else{
        printf("Not palindrome number");
    }
    return 0;
}