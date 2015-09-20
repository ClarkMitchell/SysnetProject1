#ifndef PARSE_H
#define PARSE_H

#define MAXARGS 32
/* structure to hold input data */
typedef struct Param_s
{
    char *inputRedirect;
    char *outputRedirect;
    int  background;
    int  argumentCount;
    char *argumentVector[MAXARGS]; /* array of strings */
    /* file name or NULL */
    /* file name or NULL */
    /* either 0 (false) or 1 (true) */
    /* number of tokens in argument vector */
}Param_t;

char *read_line(void);
Param_t split_line(char *line);

#endif
