libRWOfunction.so: src/function.cpp
	g++ src/function.cpp -o libRWOfunction.so -shared -fPIC  

main.o: src/main.cpp
	g++ -c src/main.cpp

all: libRWOfunction.so main.o
	g++ main.o -I/src libRWOfunction.so -o rwo

clean:
	rm -rf *.so
	rm -rf *.o*