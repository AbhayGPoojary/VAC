//Write a program to find x to the power y. Ask user to provide x and y values. Do not use any builtin functions.
#include<stdio.h>
int main(){
int i,x,y,result=1;
printf("Enter the value of x:");
scanf("%d",&x);
printf("Enter the value of y:");
scanf("%d",&y);

for(i=0;i<y;++i){
result*=x;
}
printf("%d to the power %d is %d",x,y,result);
return 0;
}

