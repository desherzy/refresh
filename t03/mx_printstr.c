#include <stdio.h>
#include <unistd.h>

int mx_strlen(const char *s);

void mx_printstr(const char *s) {
    int lenght = mx_strlen(s);

    write(1, s, lenght);
}

