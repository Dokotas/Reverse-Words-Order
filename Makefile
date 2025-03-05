# Это комментарий, который говорит, что переменная CC указывает компилятор, используемый для сборки
CC=g++
#Это еще один комментарий. Он поясняет, что в переменной CFLAGS лежат флаги, которые передаются компилятору
CFLAGS=-c

# target to create first shared library
package/usr/lib/libRWOfunction.so: src/function.cpp
	$(CC) src/function.cpp -o package/usr/lib/libRWOfunction.so -shared -fPIC  

main.o: src/main.cpp
	$(CC) $(CFLAGS) src/main.cpp 

all: package/usr/lib/libRWOfunction.so main.o
	$(CC) main.o -I/src package/usr/lib/libRWOfunction.so -o package/usr/bin/main 

clean:
	rm -rf *.so
	rm -rf *.o*
