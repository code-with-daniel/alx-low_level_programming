#include <stdio.h>

int main () {
    char rev;
    for (rev = 'z'; rev >= 'a'; rev--) {
        putchar(rev);
    }

    putchar("\n");

    return 0;
}