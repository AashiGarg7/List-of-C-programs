//Fibonacci series = 0,1,1,2,3,5,8,13.....
#include<stdio.h>
int main(){
    int i,num,a=0,b=1,c;
    printf("Enter number: ");
    scanf("%d",&num);
    printf("%d, %d, ",0,1);
    for(i=0;i<num-2;i++){
        c=a+b;
        a=b;
        b=c;
        printf("%d, ",c);
    }
    return 0;
}
