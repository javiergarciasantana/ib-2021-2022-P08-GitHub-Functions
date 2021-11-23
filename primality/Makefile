CXX = g++
OBJ = primality.o
PR = primality.cc
BINARY = primality.out

main: $(OBJ)
	$(CXX) -o $(BINARY) $(OBJ)

primality.o: $(PR)
	$(CXX) -c $(PR)

clean :
	rm -f *.o *.out