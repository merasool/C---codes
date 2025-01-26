#include<stdio.h>
int main(){
    int a;
    printf("enter number =");
    scanf("%d",&a);
    if(a>0){
        printf("postive");
    }else if(a==0){
        printf("zero");

    }else{
        printf("negative");
    }
}