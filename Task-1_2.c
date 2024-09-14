#include <stdio.h>
int main(){
    float a,b,c;
        printf("Enter lengths of triangle : \n");
        scanf("%f %f %f",&a,&b,&c);
    if(a==b && b==c && c==a){
        printf("It is an equilateral triangle");
    }else{
        printf("It is not an equilateral triangle");
}
    return 0;
}