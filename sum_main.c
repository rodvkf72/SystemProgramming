#include "sum_lib.h"

void main(){
float a;
float b;
float s;
float su;
float m;
float d;

printf("첫 번째 값 입력: ");
scanf("%f", &a);
printf("두 번째 값 입력: ");
scanf("%f", &b);

s = sum(a,b);
su = sub(a,b);
m = mul(a,b);
d = div(a,b);

printf("덧셈 : %f, 뺄셈 : %f, 곱셈 : %f, 나눗셈 : %f\n",s, su, m, d);
}

