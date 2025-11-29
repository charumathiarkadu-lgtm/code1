#include<stdio.h>
int main(){
    int a,b,c,d;
    printf("enter the first number:");
    scanf("%d",&a);
    printf("enter the second number:");
    scanf("%d",&b);
    printf("enter the third number:");
    scanf("%d",&c);
    printf("enter the four number:");
    scanf("%d",&d);
    if(a>b)
    printf("the largest number is:%d",a);
    else if(b>c)
    printf("the largest number is:%d",b);
    else if(c>d)
    printf("the largest number is:%d",c);
    else
    printf("the largest number is:%d",d);
    return 0;
}