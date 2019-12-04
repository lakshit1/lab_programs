#include<stdio.h>
#include<conio.h>

void main() {
    int i, n, sum = 0;
    float avg;
    clrscr();
    printf("how many numbers");
    scanf("%d", &n);
    i = n;
    while (i >= 1) {
        sum += i;
        i--;
    }
    avg = (float) sum / n;
    printf("Average of %d numbers is %f", n, avg);

    getch();
}





