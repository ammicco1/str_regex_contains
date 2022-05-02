#include <regex.h>
#include "./str_regex_contains.h"

int str_regex_contains(char *str, char *pattern){
	regmatch_t match[REG_MATCH_SIZE];
    regex_t regex;

    if(str == NULL){
		return -1;
	}

    if(regcomp(&regex, pattern, REG_ICASE | REG_EXTENDED) != 0){
        regfree(&regex);         
        return -1;
    }

    if(!regexec(&regex, str, (size_t) REG_MATCH_SIZE, match, 0)){
		in = match[0].rm_so;
		fin = match[0].rm_eo;

		regfree(&regex);
		
		return 1;
    }else{
		return 0;
	}
}