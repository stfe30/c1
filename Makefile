c1make: c1.c
	gcc -o c1make c1.c

clean:
	rm -f *.o c1make Makefile
