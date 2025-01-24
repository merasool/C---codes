#include<stdio.h>
int main(){
    int a;
    printf("enter number =");
    scanf("%d",&a);
    if(a<0){
        printf("negative");
    }else{
        printf("positive");
    }
}