CXX = g++
OBJ = palindrome.o
PR = palindrome.cc
BINARY = palindrome.out

main: $(OBJ)
	$(CXX) -o $(BINARY) $(OBJ)

palindrome.o: $(PR)
	$(CXX) -c $(PR)

clean :
	rm -f *.o *.out