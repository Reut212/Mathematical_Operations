CC = gcc
AR = ar
OBJECTS_MAIN = main.o
OBJECTS_MATH = power.o basicMath.o main.o
FLAGS = -Wall -g

all: libmyMath.so libmyMath.a mains maind mymaths mymathd

mains: $(OBJECTS_MAIN) libmyMath.a
	$(CC) $(FLAGS) -o mains $(OBJECTS_MAIN) libmyMath.a

maind: $(OBJECTS_MAIN) libmyMath.so
	$(CC) $(FLAGS) -o maind $(OBJECTS_MAIN) ./libmyMath.so

mymaths: libmyMath.a
mymathd: libmyMath.so

libmyMath.so: $(OBJECTS_MATH)
	$(CC) -shared -o libmyMath.so $(OBJECTS_MATH)

libmyMath.a: $(OBJECTS_MATH)
	$(AR) -rcs libmyMath.a $(OBJECTS_MATH)

main.o: main.c myMath.h
	$(CC) $(FLAGS) -c main.c

power.o: power.c myMath.h
	$(CC) $(FLAGS) -c power.c

basicMath.o: basicMath.c myMath.h
	$(CC) $(FLAGS) -c basicMath.c

.PHONY: clean

clean: 
	rm -f *.o *.a *.so mains maind