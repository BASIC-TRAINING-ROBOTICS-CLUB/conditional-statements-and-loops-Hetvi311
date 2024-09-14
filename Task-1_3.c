#include <stdio.h>
int main(){
    float a,b,c;
    printf("Enter lengths of triangle : \n");
    scanf("%f %f %f",&a,&b,&c);
        if(a*a + b*b == c*c || a*a + c*c == b*b || c*c + b*b == a*a){
            printf("It is right angled triangle.");
        }else{
            printf("It is not right angled triangle.");
}
    return 0;
}