#include <stdio.h>
#include "calculator.h"

int main(){
    float n1,n2,result;
    char operator;
    printf("Enter 2 numbers : ");
    scanf("%f %f",&n1,&n2);
    printf("Enter an operator (+, -, *, /): ");
    scanf(" %c", &operator);

    switch(operator){
        case '+':
        result  = add(n1,n2);
        printf("Result: %.2f",result);
        break;
        case '-':
        result  = sub(n1,n2);
       printf("Result: %.2f",result);
        break;
        case '*':
        result  = mul(n1,n2);
        printf("Result: %.2f",result);
        break;
        case '/':
        result  = divide(n1,n2);
        printf("Result: %.2f",result);
        break;
        default:
        printf("Invalid operator");
    }
    return 0;
}