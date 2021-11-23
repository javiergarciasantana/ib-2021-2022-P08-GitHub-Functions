CXX = g++
OBJ = first_position.o
PR = first_position.cc
BINARY = first_position.out

main: $(OBJ)
	$(CXX) -o $(BINARY) $(OBJ)

first_position.o: $(PR)
	$(CXX) -c $(PR)

clean :
	rm -f *.o *.out