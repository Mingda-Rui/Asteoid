#include <sys/ioctl.h>
#include <stdio.h>
#include <unistd.h>

int main (int argc, char **argv)
{
    struct winsize w;
    
    while(1) {
        ioctl(STDOUT_FILENO, TIOCGWINSZ, &w);
        printf ("lines %d\n", w.ws_row);
        printf ("columns %d\n", w.ws_col);
        sleep(3);
    }
    return 0;  // make sure your main returns int
}