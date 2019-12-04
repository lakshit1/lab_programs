#include<stdio.h>
#include<conio.h>

void main() {
    int a, b, r = 1, in, out, hcf;
    clrscr();
    printf("Enter two number \n");
    scanf("%d %d", &a, &b);
    if (a < b) {
        out = a;
        in = b;
    } else {
        out = b;
        in = a;
    }
    while (r != 0) {
        r = in % out;
        in = out;
        out = r;
    }
    hcf = in;
    printf("HCF of %d and %d is %d", a, b, hcf);

    getch();
}