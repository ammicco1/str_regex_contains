#include <stdio.h>
#include <stdlib.h>

#include "./str_regex_contains.h"

int main(int argc, char **argv){
    int ret;

    if(argc < 3){
        fprintf(stderr, "No str or regex! use: ./test {STR} {REGEX}\n");
        
        return -1;
    }

    return str_regex_contains(argv[1], argv[2]);
}