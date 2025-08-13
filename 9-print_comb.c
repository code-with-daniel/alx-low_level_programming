#include <stdio.h>

int main() {
     
    int num;

    for (num = 0; num <= 10; num++) {

        putchar(num + 48);

        if (num != 9) {
            putchar(',');
            putchar(' ');
        }

        
    }
    putchar('\n');

    return(0);
}