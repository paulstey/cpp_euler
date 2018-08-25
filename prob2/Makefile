CC = g++
CXXFLAGS = -Wall -pedantic -std=c++11 -I.
DEPS = utils.h
OBJ = prob2.o utils.o


%.o: %.cpp $(DEPS)
	$(CC) -c -o $@ $< $(CXXFLAGS)

prob2: $(OBJ)
	g++ -o $@ $^ $(CXXFLAGS)

.PHONY: clean

clean:
	rm -f *.o *~
