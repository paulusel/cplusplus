#include <stdlib.h>
#include <cstdio>

void printenv() {
    char ** env;
#if defined(WIN) && (_MSC_VER >= 1900)
    env = *__p__environ();
#else
    extern char ** environ;
    env = environ;
#endif
    for (env; *env; ++env) {
        printf("%s\n", *env);
    }
}

int main(){

    printenv();

    return 0;
}