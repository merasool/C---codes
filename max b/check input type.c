#include<stdio.h>
int main(){
    char a;
    printf("enter number = ");
    scanf("%c",&a);
    if((a>='a' && a<='z')||(a>='A' && a<='Z')){
        printf("alphabets");
    }else if(a>='1' && a<='9'){
        printf("digit");
    }else{
        printf("special charcter");
    }
}