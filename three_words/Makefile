CXX = g++
OBJ = three_words.o
PR = three_words.cc
BINARY = three_words.out

main: $(OBJ)
	$(CXX) -o $(BINARY) $(OBJ)

three_words.o: $(PR)
	$(CXX) -c $(PR)

clean :
	rm -f *.o *.out