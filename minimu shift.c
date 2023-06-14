#include<stdio.h>
int main(){
float a,b,min,min1;
scanf("%f%f",&a,&b);
min=a/b;
min1=(min+1);
if("a%b ==0"){
printf("%f",min);
}
else if("a%b !=0"){
    printf("%f",min1);
}
return 0 ;
}
