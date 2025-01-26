#include<stdio.h>
int main(){
    char ch;
    printf("enter = ");
    scanf("%c",&ch);
    if(ch>='a' && ch<='z' || ch>='A' && ch<='Z'){
        printf("it is an alphabet");
    }else{
        printf("not alphabet");
    }
}