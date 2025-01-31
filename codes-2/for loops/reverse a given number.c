#include<stdio.h>
int main(){
    int a,t=0;
    printf("enter number = ");
    scanf("%d",&a);
    for(int i=0;i<=a;i++){
        t=t*10+a%10;
        a=a/10;

    }
    printf("3%d",t);
}