#include <stdio.h>
#include "cal.h"

int main(){
float num1, num2, result;
char sign;

printf("첫 번째 숫자 : ");
scanf("%f", &num1);

printf("(+,-,*,/) : ");
scanf(" %c", &sign);

printf("두 번째 숫자 : ");
scanf("%f", &num2);

switch(sign){
case '+' :
result = add(num1, num2);
break;
case '-' :
result = sub(num1, num2);
break;
case '*' :
result = mul(num1, num2);
break;
case '/' :
result = div(num1, num2);
break;
default:
printf("입력이 잘못되었습니다.\n");
return 0;
}

printf("result : %f \n", result);
return 0;
}
