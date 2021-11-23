CXX = g++
OBJ = divisors.o
PR = divisors.cc
BINARY = divisors.out

main: $(OBJ)
	$(CXX) -o $(BINARY) $(OBJ)

divisors.o: $(PR)
	$(CXX) -c $(PR)

clean :
	rm -f *.o *.out