#include<stdio.h>
#include<conio.h>

int hcf_fn(int, int);

void main() {
    int x, y, hcf;
    clrscr();
    printf("Enter two number \n");
    scanf("%d %d", &x, &y);
    hcf = hcf_fn(x, y);
    printf("HCF of %d and %d is %d", x, y, hcf);

    getch();
}

int hcf_fn(int a, int b) {
    int r = 1, in, out, hcf;
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
    return (hcf);
}