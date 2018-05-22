CC = g++
CFLAGS = -Wall -pedantic -std=c++11 -I.
DEPS = utils.h
OBJ = prob2.o utils.o


%.o: %.cpp $(DEPS)
	$(CC) -c -o $@ $< $(CFLAGS)

prob2: $(OBJ)
	g++ -o $@ $^ $(CFLAGS)

.PHONY: clean

clean:
	rm -f *.o *~
