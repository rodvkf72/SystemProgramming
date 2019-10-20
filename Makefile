sum_main : sum_main.o sum_lib.o
	gcc -g3 -o main.out sum_main.o sum_lib.o
sum_main.o : sum_main.c sum_lib.h
	gcc -g3 -c sum_main.c
sum_lib.o : sum_lib.c sum_lib.h
	gcc -g3 -c sum_lib.c

celan :
	rm -f main.out sum_main.o sum_lib.o
