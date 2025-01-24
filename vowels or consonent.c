#include<stdio.h>
int main(){
    char ch;
    printf("enter letter =");
    scanf("%c",&ch);
    if(ch=='a'||ch=='A'||ch=='e'||ch=='E'||ch=='i'||ch=='I'||ch=='o'||ch=='O'||ch=='u'||ch=='U'){
        printf("vowels");
    }else{
        printf("consonents");
    }
}