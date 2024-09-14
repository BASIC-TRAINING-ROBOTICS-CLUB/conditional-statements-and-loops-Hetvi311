#include <stdio.h>
int main(){
    int n,fact=1;;
    printf("Enter a number for factorial :");
    scanf("%d",&n);
    if(n>0){
        for(int i=1;i<=n;i++){
            fact *= i;
        }
        printf("Factorial : %d\n",fact);
    }else{
        printf("Enter a positive number");
    }
    return 0;
}