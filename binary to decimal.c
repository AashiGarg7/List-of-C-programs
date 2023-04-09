#include<stdio.h>
int main(){
    int r,num,sum=0,power=1;
    printf("enter a number: ");
    scanf("%d",&num);
    while(num!=0){
        r=num%10;
        if(r==1){
            sum+=power;
        }
        power*=2;
        num/=10;
    }
    printf("%d",sum);

    return 0;
}
