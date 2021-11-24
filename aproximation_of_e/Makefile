CXX = g++
OBJ = aproximation_of_e.o
PR = aproximation_of_e.cc
BINARY = aproximation_of_e.out

main: $(OBJ)
	$(CXX) -o $(BINARY) $(OBJ)

aproximation_of_e.o: $(PR)
	$(CXX) -c $(PR)

clean :
	rm -f *.o *.out

