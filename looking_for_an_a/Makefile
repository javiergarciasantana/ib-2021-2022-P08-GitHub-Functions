CXX = g++
OBJ = looking_for_an_a.o
PR = looking_for_an_a.cc
BINARY = looking_for_an_a.out

main: $(OBJ)
	$(CXX) -o $(BINARY) $(OBJ)

looking_for_an_a.o: $(PR)
	$(CXX) -c $(PR)

clean :
	rm -f *.o *.out