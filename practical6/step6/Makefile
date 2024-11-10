CC = gcc 
CCFLAGS = -03
LDFLAGS = -lm 


all: mmc

mmc: main.o mm.o
	$(CC) -o $@ $^ $(LDFLAGS)

mm.o: mm.c
	$(CC) -c $(CCFLAGS) $<

main.o : main.c 
	$(CC) -c $(CCFLAGS) $<


