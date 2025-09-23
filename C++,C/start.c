#include <stdio.h>
#include <stdlib.h>
#include <string.h> 
#include <unistd.h>


int main(int argc, char *argv[]) {
    char *args[] = {"/bin/sh", NULL};
    execv(args[0], args);
    return 0;
}