#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include "static.h"

int main(){
int a=0;
int b=0;
int s=0;
int su=0;
int m=0;
float d=0;
printf("메모리 정적 할당! \n");
printf("첫 번째 값 입력: ");
scanf("%f", &a);
printf("두 번째 값 입력: ");
scanf("%f", &b);
s = sumdef(a,b);
su = subdef(a,b);
m = multidef(a,b);
d = divdef(a,b);
printf("덧셈 : %f, 뺄셈 : %f, 곱셈 : %f, 나눗셈 : %f\n",s, su, m, d);
return 0;
}
