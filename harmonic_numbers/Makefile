CXX = g++
OBJ = harmonic_numbers.o
PR = harmonic_numbers.cc
BINARY = harmonic_numbers.out

main: $(OBJ)
	$(CXX) -o $(BINARY) $(OBJ)

harmonic_numbers.o: $(PR)
	$(CXX) -c $(PR)

clean :
	rm -f *.o *.out