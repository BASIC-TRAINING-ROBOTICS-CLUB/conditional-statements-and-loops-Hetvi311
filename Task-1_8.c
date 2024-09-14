#include <stdio.h>
int main(){
    char vowel;
printf("Enter a character : ");
scanf("%c",&vowel);
if(vowel=='a' || vowel=='e' || vowel=='i' || vowel=='o' || vowel=='u'){
  printf("Entered character is a vowel");
}else{
  printf("Entered character is not a vowel");
}

    return 0;
}