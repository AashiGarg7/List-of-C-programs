//to print factorial of a number using functions
#include<stdio.h>
int fact(int num){
    int i,f=1;
    for(i=1;i<=num;i++){
        f *= i;
    }
    printf("Factorail is: %d",f);
}
int main(){
    int num;
    printf("Enter number: ");
    scanf("%d",&num);
    fact(num);
    return 0;
}
