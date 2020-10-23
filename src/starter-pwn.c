#include <stdlib.h>
#include <stdio.h>
#include <string.h>

void get_pwd(void);
void set_pwd(void);

char pwd[9];

int main(int argc, char **argv)
{
    get_pwd();
    puts("Sorry, that doesn't match our arcane password requirements.");
    return 0;
}

void get_pwd(void)
{
    char buf[8];
    puts("Welcome to <system>. Please set a password:");
    fgets(buf, 100, stdin);

    for (int i = 0; i < 8; ++i)
        pwd[i] = buf[i];
    pwd[8] = '\0';
}

__attribute__((used))
void set_pwd(void)
{
    puts("Welcome, <user>! Your password is:");
    puts("********");
    exit(0);
}