#include<stdio.h>
int main(){
    int a,digit;
    int rev=0;
    printf("Enter no:");
    scanf("%d",&a);
    while(a>0){
        digit=a%10;
        rev=rev*10+digit;
        a=a/10;
    }
    printf("Reverse no:%d",rev);
    return 0;
}