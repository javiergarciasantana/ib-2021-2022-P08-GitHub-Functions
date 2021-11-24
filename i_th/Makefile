CXX = g++
OBJ = i_th.o
PR = i_th.cc
BINARY = i_th.out

main: $(OBJ)
	$(CXX) -o $(BINARY) $(OBJ)

i_th.o: $(PR)
	$(CXX) -c $(PR)

clean :
	rm -f *.o *.out