#include<stdio.h>
int main(){
    int a,b,c;
    printf("Enter no 1:");
    scanf("%d",&a);
    printf("Enter no 2:");
    scanf("%d",&b);
    printf("Enter no 1:");
    scanf("%d",&c);
    if(a>b && a>c){
        printf("largest no=%d",a);
    }
    else if(b>a && b>c){
        printf("Largest no=%d",b);
    }
    else
    printf("largest no=%d",c);
    return 0;
}