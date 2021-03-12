#include <stdio.h>

#include "include/cli.h"

void print_logo() {
    printf(
        "    /            _   _        _       _            _   \n"
        "  __|_          | | (_)      | |     | |          | |  \n"
        " |____|    ___  | |  _   ___ | | _   | |__    ___ | |_ \n"
        " |    |   / __| | | | | / __|| |/ /  | '_  \\ / _ \\| __|\n"
        " |    |  | (__  | | | | |(__ |    <| | |_) |  (_) | |_ \n"
        " \\____/   \\___| |_| |_| \\___|| _|\\_\\ |_.__/  \\___/ \\__|\n"
    );
}

void print_usage() {
    print_logo();
    puts("Usage: clickbot [options]");
}

void print_help() {
    printf(
        "clickbot"
    );
}

void print_version() {
    print_logo();
    printf("\n");
    printf("Version: %s\n", VERSION);
}
