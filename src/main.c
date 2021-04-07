#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <getopt.h>

#include "include/click.h"
#include "include/cli.h"
#include "include/main.h"

#define CONSTANT(name, value) \
    name = value,
typedef enum {
    #include "include/buttons.h"
} Constants;
#undef CONSTANT
#define CONSTANT(name, value) \
    #name,
char* constants[] = {
    #include "include/buttons.h"
};
Constants enumparse(char* name) {
    int ii;
    for (ii = 0; ii < sizeof(constants) / sizeof(constants[0]); ++ii) {
        if (!strcmp(name, constants[ii])) {
            return (Constants)ii;
        }   
    }   
    return (Constants)-1;
}

int main(int argc, char **argv) {
    int selectedButton = 1;
    int delay = 100;
    int amount;

    int options;
    while ((options = getopt(argc, argv, "hvb:d:a:")) != -1) {
        switch (options) {
            case 'h':
                print_help();
            break;

            case 'v':
                print_version();
            break;

            case 'b':
                selectedButton = enumparse(optarg);
                ++selectedButton;
            break;

            case 'd':
                delay = atoi(optarg);
            break;

            case 'a':
                amount = atoi(optarg);
            break;
        }
    }

    if(optind == 1) {
        print_usage();
        puts("clickbot -h for more information");
        exit(2);
    }
    if(selectedButton < 1 || selectedButton > 3) {
        print_usage();
        exit(2);
    }

    click(selectedButton, delay, amount);

    return 0;
}
