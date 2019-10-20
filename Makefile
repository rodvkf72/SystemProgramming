sum_main : sum_main.o sum_lib.o
	gcc -o main.out sum_main.o sum_lib.o
sum_main.o : sum_main.c sum_lib.h
	gcc -c sum_main.c
sum_lib.o : sum_lib.c sum_lib.h
	gcc -c sum_lib.c

celan :
	rm -f main.out sum_main.o sum_lib.o
