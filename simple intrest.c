#include<stdio.h>
int main(){
    int p,t,r;
    printf("enter values (p=principal R=rate of interest & t=time):");
    scanf("%d %d %d",&p,&t,&r);
    int si=p*t*r/100;
    printf("total interest = %d",si);
}