CXX = g++
OBJ = harmonic_numbers_1.o
PR = harmonic_numbers_1.cc
BINARY = harmonic_numbers_1.out

main: $(OBJ)
	$(CXX) -o $(BINARY) $(OBJ)

harmonic_numbers_1.o: $(PR)
	$(CXX) -c $(PR)

clean :
	rm -f *.o *.out