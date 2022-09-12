#include <stdio.h>
#include <unistd.h>
#include <string.h>

void mx_printchar();


void mx_probel(int n)
{

    for (int i = 0; i < n; i++)
    {
        mx_printchar(' ');
    }


}


void mx_tire(int n)
{

    for (int i = 0; i < n; i++)
    {
        mx_printchar('-');
    }


}

void mx_fum(int n, int b, int c)
{
    if (n % 2 == 0) {
        n = n / 2;
    }
    else {
        n = n / 2 + 1;
    }
    for (int i = 0; i < n; i++) {
        mx_printchar('\n');
        mx_printchar('|');
        mx_probel(b);
        mx_printchar('|');
        mx_probel(c);
        if (i == (n)-1) {
            mx_printchar('+');
            break;
        }
        if (i == (n)) {
            mx_printchar('+');
            break;
        }
        mx_printchar('|');
    }
}

void mx_end(int a, int b, int c)
{
    mx_printchar('\n');
    mx_printchar('+');
    mx_tire(b);
    mx_printchar('+');
    mx_probel(c);
    mx_printchar('|');
    mx_fum(a, b, c);
    for (int i = 0; i < a / 2; i++) {
        mx_printchar('\n');
        mx_printchar('|');
        mx_probel(b);
        mx_printchar('|');
        mx_probel(c - i - 1);
        mx_printchar('/');
    }
    mx_printchar('\n');
    mx_printchar('+');
    mx_tire(b);
    mx_printchar('+');
    mx_probel(c);
}
void mx_cube(int n)
{
    if (n > 1) {
        int a = n;     /*|*/
        int b = 2 * n; /*-*/
        int c = n / 2; /*/*/
        mx_probel((c + 1));
        mx_printchar('+');
        mx_tire(b);
        mx_printchar('+');
        for (int i = 0; i < c; i++) {
            mx_printchar('\n');
            mx_probel(c - i);
            mx_printchar('/');
            mx_probel(b);
            mx_printchar('/');
            mx_probel(i);
            mx_printchar('|');
        }
        mx_end(a, b, c);
    }
}
