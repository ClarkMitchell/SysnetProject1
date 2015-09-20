#ifndef PARSE_H
#define PARSE_H

#define MAXARGS 32

typedef struct Param_s
{
    char *inputRedirect;
    char *outputRedirect;
    int  background;
    int  argumentCount;
    char *argumentVector[MAXARGS]; /* array of strings */
}Param_t;

char *read_line(void);
Param_t split_line(char *line);
void printParams(Param_t * param);

#endif
