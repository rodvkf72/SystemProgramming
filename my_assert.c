#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <errno.h>

void my_assert(int num)
{
if((num >= 0) && (num <= 100)){
printf("my_assert: num = %d\n", num);
}
else{
errno = EDOM;
perror("");
printf("my_assert: my_assert.c:8:my_assert: Assention `((num >= 0) && (num <= 100))` failed.\n", stdout);
abort();
}
}

main(int argc, char *argv[]){
int num;
if(argc < 2){
fprintf(stderr, "Usage: my_assert aNumber\n(0 <= aNumber <= 100)\n");
exit(1);
}
num = atoi(argv[1]);
my_assert(num);
}
