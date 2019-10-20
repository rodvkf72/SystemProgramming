#include <stdio.h>
#include <dlfcn.h>
#include <stdlib.h>

int main(){
void *handle;
float (*add)(float, float);
float (*sub)(float, float);
float (*mul)(float, float);
float (*div)(float, float);
char *error;

float n1, n2, result;
char sign;

handle = dlopen("./lib/libcal.so", RTLD_LAZY);
if(!handle){
fputs(dlerror(), stderr);
exit(1);
}
add = dlsym(handle, "add");
if((error = dlerror()) != NULL){
fprintf(stderr, "%s", error);
exit(1);
}
sub = dlsym(handle, "sub");
if((error = dlerror()) != NULL){
fprintf(stderr, "%s", error);
exit(1);
}
mul = dlsym(handle, "mul");
if((error =  dlerror()) != NULL){
fprintf(stderr, "%s", error);
exit(1);
}
printf("첫 번째 값 : ");
scanf("%f", &n1);
printf("연산 종류(+, -, *, /) : ");
scanf(" %c", &sign);
printf("두 번째 값 : ");
scanf("%f", &n2);

switch(sign){
case '+' :
result = (*add)(n1, n2);
break;
case '-' :
result = (*sub)(n1, n2);
break;
case '*' :
result = (*mul)(n1, n2);
break;
case '/' :
result = (*div)(n1, n2);
break;
default:
printf("잘못된 입력입니다!\n");
return 0;
}
printf("연산 결과 : %f\n", result);
dlclose(handle);
return 0;
}
