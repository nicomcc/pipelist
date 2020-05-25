output: main.o pipelist.o
	g++ main.o pipelist.o -o output

main.o: main.cpp
	g++ -c main.cpp

pipelist.o: pipelist.cpp pipelist.h
	g++ -c pipelist.cpp

clean:
	rm *.o output