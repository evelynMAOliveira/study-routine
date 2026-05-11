#include <stdio.h>

int main() {
    int nb, nt, nl;
    int c;

    nb = nt = nl = 0;
    while ((c = getchar()) != EOF) {
        if (c == ' ')
            ++nb;
        else if (c == '\t')
            ++nt;
        else if (c == '\n')
            ++nl;
    }
    printf("%d\t%d\t%d\n", nb, nt, nl);
}