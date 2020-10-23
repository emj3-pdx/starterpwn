// starter-pwn.c
// Evan Johnson

#include <stdlib.h>
#include <stdio.h>
#include <string.h>

void get_pwd(void);
void set_pwd(void);

char pwd[9];

int main(int argc, char **argv)
{
    // call vulnerable function
    get_pwd();

    // print "failure" message and exit if exploit unsuccessful
    puts("Sorry, that doesn't match our arcane password requirements.");
    exit(0);
}

// VULNERABLE FUNCTION
void get_pwd(void)
{
    // no other local variables, so the buffer size and location should be
    // relatively clear in disassembly
    char buf[10];
    puts("Welcome to <system>. Please set a password:");
    // this reads A LOT more bytes than fit in `buf`, but looks like a possible typo
    fgets(buf, 100, stdin);

    // Copy the password into a globally-accessible location. Not actually
    // useful to this challenge, but the copy could be used to add constraints
    // for the payload
    for (int i = 0; i < 8; ++i)
        pwd[i] = buf[i];
    pwd[8] = '\0';
}

// TARGET FUNCTION
// The __attribute__((used)) tells gcc and clang to compile this function and include
// it in the binary despite the fact that it's not called anywhere in the program.
// That's ABSOLUTELY ESSENTIAL to make this runnable by overwriting a return address using
// the vuln in `get_pwd`.
__attribute__((used))
void set_pwd(void)
{
    // calling this function is enough to "win"--in a real CTF, this would open
    // a flag file and print the contents
    puts("Welcome, <user>! Your password is:");
    puts("********");

    // exit cleanly after success
    exit(0);
}