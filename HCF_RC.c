#include<stdio.h>
#include<conio.h>

void main() {
    int hcf(int, int);
    int a, b, hcfn;
    printf("Enter two numbers \n");
    scanf("%d %d", &a, &b);
    hcfn = hcf(a, b);
    printf("Hcf = %d", hcfn);
    getch();
}

int hcf(int x, int y) {
    if (x % y == 0)
        return (y);
    return (hcf(y, x % y));

}


