#include <stdio.h>
#include <string.h>
#include <sys/types.h>
#include <sys/wait.h>
#include <unistd.h>
#include <stdlib.h>
#include "parse.h"

int execute(Param_t *params){
    pid_t pid, wpid;
    int status;
    int count = params->argumentCount;
    char **args = params->argumentVector;

    if(strcmp(args[0], "exit") == 0){
        exit(0);
    }

    pid = fork();
    if(pid == 0){
         execvp(*args, args);
    }else{
         wpid = wait(&status);
    }
    return 1;
}

void prompt_loop(int debug){
    char *line;
    Param_t params;
    int status;

    do{
        printf("> ");
        line = read_line();
        params = split_line(line);
        if(debug)
          printParams(&params);
        status = execute(&params);
    }
    while (status);
}
