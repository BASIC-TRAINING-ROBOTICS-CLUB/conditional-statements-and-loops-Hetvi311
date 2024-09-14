#include <stdio.h>
int main(){
    int num,digit,sum=0,count=0;
printf("Enter a number :");
scanf("%d",&num);
int temp_num=num;
while(temp_num!=0){
  digit=num%10;
  sum = sum + digit;
  count++;
  temp_num = temp_num/10;
}
printf("count %d\n",count);
printf("Sum of digits of number : %d\n",sum);
    return 0;
}