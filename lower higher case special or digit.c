#include<stdio.h>
int main(){
    char ch;
    printf("enter = ");
    scanf("%c",&ch);
    if(ch>='a'&& ch<='z'){
        printf("lowercase");
    }else if(ch>='A'&&ch<='Z'){
        printf("upper case");
    }else if(ch>='0' && ch<='9'){
        printf("digit");
    }else{
        printf("character");
    }
    
}