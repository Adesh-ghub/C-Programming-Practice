#include<stdio.h>
int main(){
    int a;
    printf("Enter no");
    scanf("%d",&a);
    if(a>0){
        printf("Positive no");
    }
    else if(a<0){
        printf("Negative no");
    }
    else
    printf("Zero");
    return 0;
}