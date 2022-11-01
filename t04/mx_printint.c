#include <stdio.h>

void mx_printchar(char c);

void mx_printint(int n) {
    long long num = n;
    if (num < 0) {
        mx_printchar('-');
        num *= -1;
    }
    if (num <= -10 || num >= 10) {
        mx_printint(num / 10);
    }
 
    mx_printchar((num % 10) + 48);
}

/*
int main() {
    mx_printint(256);
    mx_printchar('\n');

    mx_printint(-256);
    mx_printchar('\n');

    mx_printint(2147483647);
    mx_printchar('\n');

    mx_printint(-2147483648);
    mx_printchar('\n');

    mx_printint(-2147483647);
    mx_printchar('\n');

    mx_printint(0);
    mx_printchar('\n');
}
*/

