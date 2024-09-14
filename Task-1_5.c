#include <stdio.h>
int main(){
    int a,b,c;
printf("Enter 3 numbers :\n");
scanf("%d %d %d",&a,&b,&c);
if(a>b && a>c){
  printf("a is max no.");
}else if(b>a && b>c){
  printf("b is max no.");
}else{
  printf("c is max no.");
}
    return 0;
}