#include <stdio.h>
int main(){
    int year;
printf("Enter a year : ");
scanf("%d",&year);
if(year>2000){
  if((year%4 == 0 && year%100 != 0) || (year%400 == 0)){
    printf("It is a leap year and above 2000");
  }else{
    printf("It is above 2000 but not a leap year");
  }
}else{
  printf("It is not above 2000 and it is not a leap year");
}
    return 0;
}