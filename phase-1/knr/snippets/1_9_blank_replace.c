#include <stdio.h>

int main() {
    int c;
    int in_b_seq = 0;

    while ((c = getchar()) != EOF) {
        if (c == ' ') {
            if (!in_b_seq) {
                putchar(c);
                in_b_seq = 1;
            }
        } else {
            putchar(c);
            in_b_seq = 0;
        }
    }
    printf("\n");
}