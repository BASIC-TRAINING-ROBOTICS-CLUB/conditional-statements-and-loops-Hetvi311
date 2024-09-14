#include <stdio.h>
int main(){
    float x,y;
printf("Enter the value of x and y :\n");
scanf("%f %f",&x,&y);
if(x>0 && y>0){
  printf("First Quadrant");
}else if(x>0 && y<0){
  printf("Second Quadrant");
}else if(x<0 && y<0){
  printf("Third Quadrant");
}else{
  printf("Fourth Quadrant");
}
    return 0;
}