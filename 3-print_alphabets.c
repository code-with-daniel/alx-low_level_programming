#include <stdio.h>

int main() {
    char low ;

    for (low = 'a'; low <= 'z'; low++) {
        putchar(low);
    }
      for (low = 'A'; low <= 'Z'; low++) {
        putchar(low);
    }
    putchar('\n');

    return 0;

}

