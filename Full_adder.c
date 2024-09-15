#include <stdio.h>
int cal_sum(int a,int b,int carry_in){
    return(a^b^carry_in);
}
int cal_carry_out(int a,int b, int carry_in){
    return(a&b) | (b&carry_in) | (a&carry_in);
}
int main(){
    int a,b,carry_in;//input
    int sum,carry_out;//output
    printf("Enter 2 binary digits and carry_in :");
    scanf("%d %d %d",&a,&b,&carry_in);

    if((a!=0 && a!=1) || (b!=0 && b!=1) || (carry_in!=0 && carry_in!=1)){
        printf("Enter proper input(0 or 1)");
        return 1;
    }

    sum=cal_sum(a,b,carry_in);
    carry_out=cal_carry_out(a,b,carry_in);

    printf("Sum : %d\n",sum);
    printf("Carry out : %d\n",carry_out);
    return 0;
}