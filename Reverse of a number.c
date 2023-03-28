//To print reverse of a number
#include<stdio.h>
int main(){
    int num,n1=0;
    printf("Enter number: ");
    scanf("%d",&num);
    while(num!=0){
        n1 = n1*10 + num%10;
        num = num/10;
    }
    printf("The reverse of entered number is: %d",n1);
    return 0;
}