#include <stdio.h>
int main(){
    int p,r,t;
    printf("Enter principal no:");
    scanf("%d",&p);
    printf("Enter rate no:");
    scanf("%d",&r);
    printf("Enter time no:");
    scanf("%d",&t);
    printf("Simple Interest:%d",(p*r*t)/100);
    return 0;
}