CC=clang
CFLAGS= -fno-stack-protector -fno-pic
SRC=src/starter-pwn.c
PROG=starter-pwn

all:
	$(CC) $(CFLAGS) $(SRC) -o $(PROG)