CC = g++
CFLAGS = -Wall -pedantic -std=c++11 -I.
DEPS = utils.h
OBJ = prob3.o utils.o


%.o: %.cpp $(DEPS)
	$(CC) -c -o $@ $< $(CFLAGS)

prob3: $(OBJ)
	g++ -o $@ $^ $(CFLAGS)

.PHONY: clean

clean:
	rm -f *.o *~
