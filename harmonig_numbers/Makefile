CXX = g++
OBJ = harmonig_numbers.o
PR = harmonig_numbers.cc
BINARY = harmonig_numbers.out

main: $(OBJ)
	$(CXX) -o $(BINARY) $(OBJ)

harmonig_numbers.o: $(PR)
	$(CXX) -c $(PR)

clean :
	rm -f *.o *.out