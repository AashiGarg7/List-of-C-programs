//to print gcd of two numbers
#include<stdio.h>
int main(){
    int i,num1,num2,gcd;
    printf("Enter two numbers: ");
    scanf("%d %d",&num1,&num2);
    for(i=2;i<=num1 && i<=num2;i++){
        if(num1%i==0 && num2%i==0){
            gcd = i;
        }
    }
    printf("The gcd is: %d",gcd);
    return 0;
}
