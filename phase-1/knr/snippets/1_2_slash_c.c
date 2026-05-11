/*
    \r: moves cursor to beggining of screen
    \e: asks for control manouvers to change formatting of terminal output
    \v: moves next part of string to next line, same columns
    \x: asks for literal hex code of a character
*/

#include <stdio.h>

main() {
    printf("Hiiiiii\rEvelyn\n");
    printf("Im\e[31m Niko\e[0m\n");
    printf("Wow\vseriously?\n");
    printf("Yeah\x65\n");
}