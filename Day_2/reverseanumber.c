#include <stdio.h>
int main(){
    int n,reverse=0,remainder,original;
    printf("Enter a number: ");
    scanf("%d",&n);
    original=n;
    while(n!=0){
        remainder=n%10;
        reverse=reverse*10+remainder;
        n/=10;
    }
    if(original=n%10==0){
        printf("The reverse of the number is: %d",reverse);
    while(original%10==0){
        printf("0");
        original/=10;
    }
    }
    else{
        printf("The reverse of the number is: %d",reverse);
    }
    return 0;
}