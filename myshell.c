#include <stdio.h>
#include <string.h>
#include "prompt.h"
#include "parse.h"

int main(int argc, char **argv){

    int debug = 0;

    if(argc > 1)
        if(strcmp(argv[1], "-Debug") == 0)
            debug = 1;
    prompt_loop(debug);

    return 0;

}
