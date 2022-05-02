#include <stdio.h>
#include <stdlib.h>

#include "./str_regex_contains.h"

int main(int argc, char **argv){
    if(argc < 3){
        fprintf(stderr, "no str or regex! use main str regex\n");
        
        return -1;
    }

    if(str_regex_contains(argv[1], argv[2]) == 1){
        printf("the string contains the pattern\n");
    }else{
        printf("not included\n");
    }

    return 0;
}