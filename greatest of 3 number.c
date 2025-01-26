#include<stdio.h>
int main(){
    int a,b,c,max;
    printf("enter 3 numbers =");
    scanf("%d %d %d",&a,&b,&c);
    if(a>b){
        max=a;

    }if(b>a){
        max=b;
    }if(c>a){
        max=c;
    }
    printf("greatest number = %d",max);
    
}