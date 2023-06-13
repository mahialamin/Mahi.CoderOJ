#include<stdio.h>
int main(){

float a,b,c;
scanf("%f%f%f",&a,&b,&c);
printf("your number is:\n %.2f %.2f %.2f \n",a,b,c);

if(a>=b && a>=c){
    printf("max number is :%.2f",a);
}
else if(b>=a && b>=c){
    printf("max number is :%.2f",b);
}
else if(c>=b && c>=a){
printf("max number is :%.2f",c);
}
return 0;
}
