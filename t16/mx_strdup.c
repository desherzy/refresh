#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int mx_strlen(const char *s);
char *mx_strcpy(char *dst, const char *src);
char *mx_strnew(const int size);

char *mx_strdup(const char *str) {
    int lenght = mx_strlen(str);
    if (lenght < 0) {
        return NULL;
    }

    char *dst = mx_strnew(lenght);
    mx_strcpy(dst, str);

    return dst;
}

