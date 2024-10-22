SRC = Usuario.cpp \
	  Impresora.cpp

OBJ = Usuario.o \
	  Impresora.o

all:
	g++ -c ${SRC}
	g++ ${OBJ} main.cpp -o main

clean:
	rm *.o&&rm main