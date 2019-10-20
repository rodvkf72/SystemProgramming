#include <stdio.h>
#include <stdlib.h>
#include <math.h>

float sumdef(float a, float b){
float sum = (a + b);
return sum;
}
float subdef(float a, float b){
float sub = (a - b);
return sub;
}
float multidef(float a, float b){
float multi = (a * b);
return multi;
}
float divdef(float a, float b){
float divine = (a / b);
return divine;
}

void main(){
float *a;
float *b;
float s;
float su;
float m;
float d;

printf("메모리 동적 할당!\n");

a=(float *)malloc(sizeof(float));
if(a == NULL){
printf("메모리 할당 실패!");
exit(-1);
}
printf("첫 번째 값 입력: ");
scanf("%f", &a[0]);

b=(float *)malloc(sizeof(float));
if(b == NULL){
printf("메모리 할당 실패!");
exit(-1);
}
printf("두 번째 값 입력: ");
scanf("%f", &b[0]);

s = sumdef(a[0],b[0]);
su = subdef(a[0],b[0]);
m = multidef(a[0],b[0]);
d = divdef(a[0],b[0]);
printf("덧셈 : %f, 뺄셈 : %f, 곱셈 : %f, 나눗셈 : %f\n",s, su, m, d);
free(a);
free(b);
}
