CXX = g++
OBJ = parentheses.o
PR = parentheses.cc
BINARY = parentheses.out

main: $(OBJ)
	$(CXX) -o $(BINARY) $(OBJ)

parentheses.o: $(PR)
	$(CXX) -c $(PR)

clean :
	rm -f *.o *.out