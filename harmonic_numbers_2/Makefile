CXX = g++
OBJ = harmonic_numbers_2.o
PR = harmonic_numbers_2.cc
BINARY = harmonic_numbers_2.out

main: $(OBJ)
	$(CXX) -o $(BINARY) $(OBJ)

harmonic_numbers_2.o: $(PR)
	$(CXX) -c $(PR)

clean :
	rm -f *.o *.out