#include "conio.h"
#include <stdio.h>
#include <termios.h>
#include <unistd.h>

void clrscr(void) {
    printf("\033[2J\033[1;1H");
}


int getch(void) {
    struct termios oldt, newt;
    int ch;

    tcgetattr(STDIN_FILENO, &oldt);
    newt = oldt;
    newt.c_lflag &= ~(ICANON | ECHO);
    tcsetattr(STDIN_FILENO, TCSANOW, &newt);

    ch = getchar();

    tcsetattr(STDIN_FILENO, TCSANOW, &oldt);
    return ch;
}

