#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
int x,y;
int max = 4;
int min = 0;
int **a;
int **b;

printf("행렬 x 크기 : ");
scanf("%d", &x);
printf("행렬 y 크기 : ");
scanf("%d", &y);

a = (int **)malloc(sizeof(int *) * y);
b = (int **)malloc(sizeof(int *) * y);

for(int i=0; i<y; i++){
  a[i] = (int *)malloc(sizeof(int) * x);
  b[i] = (int *)malloc(sizeof(int) * x);
}
printf("===== 첫 번째 행렬 =====\n");
for(int i=0; i<y; i++){
  for(int j=0; j<x; j++){
    a[i][j] = (int)(max * (rand()/(RAND_MAX + 1.0)) + min);
    printf("%d ", a[i][j]);
  }
  printf("\n");
}
printf("===== 두 번째 행렬 =====\n");
for(int i=0; i<y; i++){
  for(int j=0; j<x; j++){
    b[i][j] = (int)(max * (rand()/(RAND_MAX + 1.0)) + min);
    printf("%d ", b[i][j]);
  }
  printf("\n");
}
printf("===== 두 행렬의 합 =====\n");
for(int i=0; i<y; i++){
  for(int j=0; j<x; j++){
    printf("%d ", a[i][j] + b[i][j]);
  }
  printf("\n");
}
free(a);
free(b);
}
