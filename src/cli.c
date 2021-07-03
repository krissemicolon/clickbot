#include <stdlib.h>
#include <stdio.h>

#include "include/cli.h"

#ifndef VERSION
#define VERSION "Version Error"
#endif

void print_logo() {
    printf(
        "    /            _   _        _       _            _   \n"
        "  __|_          | | (_)      | |     | |          | |  \n"
        " |____|    ___  | |  _   ___ | | _   | |__    ___ | |_ \n"
        " |    |   / __| | | | | / __|| |/ /  | '_  \\ / _ \\| __|\n"
        " |    |  | (__  | | | | |(__ |    <| | |_) |  (_) | |_ \n"
        " \\____/   \\___| |_| |_| \\___|| _|\\_\\ |_.__/  \\___/ \\__|\n"
        "Simple to use AutoClicker designed for Linux X11\n"
    );
}

void print_usage() {
    puts("Usage: clickbot [options]");
}

void print_help() {
    print_logo();
    printf("\n");
    print_usage();
    printf("\n");
    printf(
        "Options:\n"
        "-d              Set the delay between clicks [ms]\n"
        "-b              Set which button to press [left, middle, right]\n"
        "-a              Set amount of click to simulate [int]\n"
        "-h              Print the help page\n"
        "-v              Print version information\n"
        "Example:\n"
        "clickbot -d 20 -b left\n"
        );

    exit(0);
}

void print_version() {
    print_logo();
    printf("\n");
    printf("Version: "VERSION"\n");
    exit(0);
}
