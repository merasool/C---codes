#include<stdio.h>
int main(){
    int a;
    printf("enter number = ");
    scanf("%d",&a);
    if(a%5==0 || a%11==0){
        printf("divisible");
    }else{
        printf("not divisible");
    }
}