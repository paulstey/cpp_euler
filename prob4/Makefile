CC = g++
CXXFLAGS = -O3 -Wall -pedantic -std=c++11 -I.
DEPS = palindrome.h
OBJ = prob4.o palindrome.o


%.o: %.cpp $(DEPS)
	$(CC) -c -o $@ $< $(CXXFLAGS)

prob4: $(OBJ)
	$(CC) -o $@ $^ $(CXXFLAGS)
	rm -f *.o 

.PHONY: clean

clean:
	rm -f *.o *~
