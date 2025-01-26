#include<stdio.h>
int main(){
    int d,m,y;
    printf("enter date month year = ");
    scanf("%d %d %d",&d,&m,&y);
    if(d>=1 && d<=31){
        if(m>=1 && m<=12){
            if(y>=1999 && y<=9999){
                printf("date is valid = %d/%d/%d",d,m,y);
            }
        }
    }else{
        printf("not valid");
    }
}