#include<stdio.h>
int main(){
    int a,b,c,d,max;
    printf("enter values");
    scanf("%d",&a);
    scanf("%d",&b);
    scanf("%d",&c);
    scanf("%d",&d);
    if(a>b){
        max=a;
    }if(b>a){
        max=b;
    }if(c>a){
        max=c;
    }if(d>a){
        max=d;
    }
    printf("greatest number = %d",max);
}