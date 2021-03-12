#include <stdlib.h>
#include <stdio.h>
#include <getopt.h>

#include "include/cli.h"
#include "include/main.h"

int main(int argc, char **argv) {
    int options;
    while ((options = getopt(argc, argv, "hv")) != -1) {
        switch (options) {
            case 'h':
                print_help();

            case 'v':
                print_version();
                
        }
    }

    if(optind == 1) {
        print_usage();
        puts("clickbot -h for more information");
        exit(2);
    }

    return 0;
}
