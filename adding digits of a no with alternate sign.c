//to add digits of a numbers with alternate sign Eg: 1234 = 1-2+3-4
#include<stdio.h>
int main(){
    int num,n1=0,n2,sum,sign=1;
    scanf("%d",&num);
    while(num!=0){
        n1 = n1*10+num%10;
        num/=10;
    }
    while(n1!=0){
        n2=n1%10;
        sum+=sign*n2;
        sign= -sign;
        n1/=10;
        
    }
    printf("%d",sum);
    return 0;
}