#include <stdio.h>
#include <string.h>
#include "parse.h"

char *read_line(void){
    char *line = NULL;
    size_t buffer_size = 0;
    getline(&line, &buffer_size, stdin);
    //printf("%s\n", line);
    return line;

}

Param_t split_line(char *line){
    Param_t params;
    params.argumentCount = 0;
    char *token;
    char *tokens[1024];
    int position = 0;

    token = strtok(line, " \n\r");
    params.argumentCount = 1;

    while(token != NULL){
        if(strcmp(token, "<") == 0)
            printf("Input redirect");
        if(strcmp(token, ">") == 0)
            printf("Output redirect");
        if(strcmp(token, "&") == 0)
            printf("background process");
        params.argumentVector[position] = token;
        position++;
        params.argumentCount++;
        token = strtok(NULL, " \n\r");

    }

    params.argumentVector[position] = NULL;
    return params;
}
