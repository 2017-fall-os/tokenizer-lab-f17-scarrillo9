all: mytoc

mytoc: mytoc.o
	cc -o $@ $^
	
mytoc.o: mytoc.c mytoc.h
	cc -c $(CFLAGS) mytoc.c
	
clean: 
	rm -f *.o mytoc

demo: mytoc
	./mytoc