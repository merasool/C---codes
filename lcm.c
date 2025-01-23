#include<stdio.h>
int main(){
    int a,b,c,lcm;
    printf("enter 2 values = ");
    scanf("%d %d",&a,&b);
    c=(a>b)?a:b;
    lcm=c;
    while(lcm%a !=0 || lcm%a!=0){
        lcm+=c;
    }
    printf("lcm = %d",lcm);


}