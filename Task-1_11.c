#include <stdio.h>
int main(){
    int n,first=0,second=1,next;
    printf("Enter the number of n terms for fibonacci series :");
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        if(i<=1){
            next=i;
        }else{
            next=first+second;
            first=second;
            second=next;
        }printf("Fibonacci series : %d\n",next);
    }
    return 0;
}