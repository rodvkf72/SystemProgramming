#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int sumdef(int a, int b){
int sum = (a + b);
return sum;
}
int subdef(int a, int b){
int sub = (a - b);
return sub;
}
int multidef(int a, int b){
int multi = (a * b);
return multi;
}
float divdef(float a, float b){
float divine = (a / b);
return divine;
}
void main(){
int a=15;
int b=3;
int s=0;
int su=0;
int m=0;
float d=0;
printf("메모리 정적 할당! \n");
printf("첫 번째 정수값 입력: ");
scanf("%d", &a);
printf("두 번째 정수값 입력: ");
scanf("%d", &b);
s = sumdef(a,b);
su = subdef(a,b);
m = multidef(a,b);
d = divdef(a,b);
printf("덧셈 : %d, 뺄셈 : %d, 곱셈 : %d, 나눗셈 : %f\n",s, su, m, d);
}
