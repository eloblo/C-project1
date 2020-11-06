CC = gcc
FLAGS = -Wall -g

all: myMaths myMathd mains maind
myMaths: basicMath.o power.o
	ar -rcs libMyMath.a basicMath.o power.o
myMathd: basicMath.o power.o
	$(CC) -shared -o libMyMath.so basicMath.o power.o
basicMath.o: basicMath.c myMath.h
	$(CC) $(FLAGS) -c basicMath.c
power.o: power.c myMath.h
	$(CC) $(FLAG) -c power.c
mains: main.o
	$(CC) $(FLAGS) -o mains main.o libMyMath.a 
maind: main.o
	$(CC) $(FLAGS) -o maind main.o libMyMath.so
main.o: main.c myMath.h
	$(CC) $(FLAGS) -c main.c
    
.PHONY: all clean

clean:
	rm -f *.o *.a *.so mains maind
