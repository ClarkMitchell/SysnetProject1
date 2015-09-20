#include <stdio.h>
#include <string.h>
#include <sys/types.h>
#include <sys/wait.h>
#include <unistd.h>
#include <stdlib.h>
#include "parse.h"

int execute(char **args){
    pid_t pid, wpid;
    int status;

    if(strcmp(args[0], "cd") == 0){
        const char *directory = args[1];
        int ret;
        ret = chdir(directory);
    }
    else{
    pid = fork();
    if(pid == 0){
        execlp(*args, *args);
    }else{
        wpid = wait(&status);
    }
    }
    return 1;
}

void prompt_loop(void){
    char *line;
    char **args;
    int status;

    do{
        printf("> ");
        line = read_line();
        args = split_line(line);
        status = execute(args);
    }
    while (status);
}
