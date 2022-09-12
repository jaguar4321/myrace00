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


void mx_under_line(int n)
{


    for (int i = 0; i < n; i++)
    {
        mx_printchar('_');
    }

}



void mx_medium(int line_l, int line_r, int vertical, int a, int b)
{
    for (int i = 0; i < line_l - 1; i++) {
        mx_probel(line_r - i - 2);
        mx_printchar('/');
        mx_probel(i + a);
        mx_printchar('\\');
        mx_probel(i + 1);
        mx_printchar('\\');
        mx_printchar('\n');
        a = a + 1;
    }
    for (int i = 0; i < vertical - 1; i++) {
        mx_probel(vertical - i - 1);
        mx_printchar('/');
        mx_probel(vertical + a + b + i);
        mx_printchar('\\');
        mx_probel(vertical - i - 1);
        mx_printchar('|');
        mx_printchar('\n');
        b++;
    }
}


void mx_pyramid(int n)
{
    int b = -1;
    int a = 1;
    int line_r = n;
    int line_l = n / 2;
    int vertical = n / 2;
    int under = 2 * n - 3;
    if (n > 1 || n % 2 == 0) {
        mx_probel(line_r - 1);
        mx_printchar('/');
        mx_printchar('\\');
        mx_printchar('\n');
        mx_medium(line_l, line_r, vertical, a, b);
        mx_printchar('/');
        mx_under_line(under);
        mx_printchar('\\');
        mx_printchar('|');
        mx_printchar('\n');
    }
}
