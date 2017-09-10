all: mytoc

mytoc: mytoc.o test.o
	cc -o $@ $^
	
test.o: test.c mytoc.h
	cc -c $(CFLAGS) test.c
	
mytoc.o: mytoc.c mytoc.h
	cc -c $(CFLAGS) mytoc.c
	
clean: 
	rm -f *.o mytoc

demo: mytoc
	./mytoc