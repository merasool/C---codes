#include<stdio.h>
int main(){
    int height,base;
    printf("enter height and base values:");
    scanf("%d %d",&height,&base);
    int area=0.5*base*height;
    printf("area of triangle = %d",area);
}