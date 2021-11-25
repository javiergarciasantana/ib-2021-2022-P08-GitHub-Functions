CXX = g++
OBJ = perfect_numbers.o
PR = perfect_numbers.cc
BINARY = perfect_numbers.out

main: $(OBJ)
	$(CXX) -o $(BINARY) $(OBJ)

perfect_numbers.o: $(PR)
	$(CXX) -c $(PR)

clean :
	rm -f *.o *.out