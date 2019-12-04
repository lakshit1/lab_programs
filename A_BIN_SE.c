#include<stdio.h>
#include<conio.h>

void main() {
    int flag = 0, l = 0, u, e, a[10], mid, n, i;
    clrscr();
    printf("How many numbers \n");
    scanf("%d", &n);
    for (i = 0; i < n; i++) {
        printf("%d = ", i);
        scanf("%d", &a[i]);
    }
    printf("Which element search \n");
    scanf("%d", &e);
    u = n - 1;
    while (l <= u) {
        mid = (l + u) / 2;
        if (e == a[mid]) {
            flag = 1;
            printf("Element found at %d", mid);
            break;
        } else if (e < a[mid])
            u = mid - 1;
        else l = mid + 1;
    }
    if (flag == 0)
        printf("Element not in the list");
    getch();
}