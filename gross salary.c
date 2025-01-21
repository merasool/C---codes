#include<stdio.h>
int main(){
    int bs,hra,other;
    printf("enter salary (bs=basic salary,hra=house rent allowance,other allowance)");
    scanf("%d %d %d",&bs,&hra,&other);
    int gross=bs+hra+other;
    printf("gross salary=%d",gross);
}