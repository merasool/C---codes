#include<stdio.h>
int main(){
    int hindi,english,maths,science,social;
    printf("enter hindi marks :");
    scanf("%d",&hindi);
    printf("enter english marks :");
    scanf("%d",&english);
    printf("enter maths marks :");
    scanf("%d",&maths);
    printf("enter science marks :");
    scanf("%d",&science);
    printf("enter social marks :");
    scanf("%d",&social);
    int total=hindi+english+maths+science+social;
    float percentage=(float)total/500*100;
    printf("your percentage = %.2f",percentage);
}