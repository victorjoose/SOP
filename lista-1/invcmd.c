#include <stdio.h>
int main(int argc, char ** argv) {

    char * params[argc];

    printf("Programa: %s\n", argv[0]);
    printf("Parametros:\n");

    for (int i = 1; i < argc; i++) {
        params[i] = argv[i];
    }

    for (int i = argc - 1; i > 0; i--) {
        printf("%s\n", params[i]); 
    }

    return 0;
}
