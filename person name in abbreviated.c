#include<stdio.h>
int main(){
    char Fname[20],Mname[20],Lname[20];
    printf("enter your full name:");
    scanf("%s %s %s",&Fname,&Mname,&Lname);
    printf("abbrivated name= %c %c %s",Fname[0],Mname[0],Lname);
}