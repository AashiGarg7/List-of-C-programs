//prime number or not
#include<stdio.h>
int main(){
    int i,num,flag=0;
    printf("Enter number: ");
    scanf("%d",&num);
    for(i=2;i<num/2;i++){ //(num/2) because numbers ahead of num/2 would never divide num 
        if(num%i==0){
            flag=1;
        }
    }
    if(flag==0){
        printf("Number is prime");
    }
    else{
        printf("Number is not prime");
    }
    return 0;
}