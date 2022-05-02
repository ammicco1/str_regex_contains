test: test.o str_regex_contains.o
	gcc -o test test.o str_regex_contains.o

test.o: test.c
	gcc -c test.c

str_regex_contains.o: str_regex_contains.c
	gcc -c str_regex_contains.c

clean: 
	rm *.o test