#include<stdio.h>
int main(){
    int a=50,b=100,c=200,d=500,e;
    int one,two,three,four;
    one=two=three=four=0;
    printf("enter amount = ");
    scanf("%d",&e);
    if(e>=d){
        one=e/d;
        e-=one*d;
    }if(e>=c){
        two=e/c;
        e-=two*c;
    }if(e>=b){
        three=e/b;
       e-=three*b;

    }if(e>=a){
        four=e/a;
        e-=four*a;

    }
    printf("%d notes = %d \n",d,one);
    printf("%d notes = %d \n",c,two);
    printf("%d notes = %d \n",b,three);
    printf("%d notes = %d \n",a,four);
}
