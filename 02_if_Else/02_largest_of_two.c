#include<stdio.h>
int main(){
    int a,b;
    printf("Enter no 1:");
    scanf("%d",&a);
    printf("Enter no 2:");
    scanf("%d",&b);
    if(a>b){
        printf("largest no=%d",a);
    }
    else
    printf("largest no=%d",b);
    return 0;
}