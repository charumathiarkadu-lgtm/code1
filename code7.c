#include<stdio.h>
int main(){
    int a,b,temp;
    a=15;
    b=18;
    temp=a;
    a=b;
    b=temp;
    printf("a=%d,b=%d",a,b);
}