#include <stdio.h>
#include <stdlib.h>

#include "./str_regex_contains.h"

int main(int argc, char **argv){
    if(argc < 3){
        fprintf(stderr, "No str or regex! use: ./test {STR} {REGEX}\n");
        
        return -1;
    }

    if(str_regex_contains(argv[1], argv[2]) == 1){
        printf("The string contains the pattern\n");
    }else{
        printf("Not included\n");
    }

    return 0;
}