#include <stdio.h>
#include <string.h>

char *read_line(void){
    char *line = NULL;
    size_t buffer_size = 0;
    getline(&line, &buffer_size, stdin);
    //printf("%s\n", line);
    return line;

}

char **split_line(char *line){
    char *token;
    char *tokens[1024];
    int position = 0;

    token = strtok(line, " \t\n\a\r");

    while(token != NULL){
        tokens[position] = token;
        position++;
        token = strtok(NULL, " ");
    }

    tokens[position] = NULL;
    return tokens;
}
