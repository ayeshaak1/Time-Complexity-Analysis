lab3: iterativeFibonacci.o recursiveFibonacci.o iterativeSumNOdd.o recursiveSumNOdd.o lab3Main.o
	gcc -Wall -std=c99 iterativeFibonacci.o recursiveFibonacci.o iterativeSumNOdd.o recursiveSumNOdd.o lab3Main.o -o lab3

iterativeFibonacci.o: iterativeFibonacci.c
	gcc -Wall -std=c99 -c iterativeFibonacci.c

recursiveFibonacci.o: recursiveFibonacci.c
	gcc -Wall -std=c99 -c recursiveFibonacci.c

iterativeSumNOdd.o: iterativeSumNOdd.c
	gcc -Wall -std=c99 -c iterativeSumNOdd.c

recursiveSumNOdd.o: recursiveSumNOdd.c
	gcc -Wall -std=c99 -c recursiveSumNOdd.c

lab3Main.o: lab3Main.c
	gcc -Wall -std=c99 -c lab3Main.c

clean:
	rm *.o lab3

