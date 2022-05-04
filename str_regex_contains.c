#include <regex.h>
#include <stdlib.h>
#include <stdio.h>

#include "./str_regex_contains.h"

#define _MATCH_SIZE_ 10

int str_regex_contains(char *str, char *pattern){
	regmatch_t match[_MATCH_SIZE_];
  regex_t regex;

  if(str == NULL){
		return -1;
	}

  if(regcomp(&regex, pattern, REG_ICASE | REG_EXTENDED) != 0){
    regfree(&regex);         
  
    return -1;
  }

  if(!regexec(&regex, str, (size_t) _MATCH_SIZE_, match, 0)){
    fprintf(stderr, "++++++ Pattern match from %d to %d ++++++\n", match[0].rm_so, match[0].rm_eo);

	  regfree(&regex);
	
	  return 1;
  }else{
    regfree(&regex);

	  return 0;
	}
}