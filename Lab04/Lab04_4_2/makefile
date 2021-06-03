all: main tests runTests run

main:
	gcc -std=c89 main.c -o main -lm

tests:
	gcc -std=c89 -o tests tests.c -lm

run:
	./main

runTests:
	./tests