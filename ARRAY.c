#include <stdio.h>
#include <conio.h>

#define MAX 10

void main() {
    int a[MAX], i, n, e, flag = 0, loc, ins;
    char option;
    clrscr();
    printf("How many numbers \n");
    scanf("%d", &n);
    for (i = 0; i < n; i++) {
        printf("%d = ", i);
        scanf("%d", &a[i]);
    }
    printf("s for search\n d for delete\n i for insert\n");
    option = getch();
    if (option == 's') {
        printf("Which element to be searched \n");
        scanf("%d", &e);
        for (i = 0; i < n; i++) {
            if (a[i] == e) {
                printf("Element %d is at %d", e, i);
                flag = 1;
                break;
            }
        }
        if (flag == 0)
            printf("Element %d is not in the list", e);
    } else if (option == 'd') {

        printf("Which element to be deleted \n");
        scanf("%d", &loc);

        for (i = loc; i < n - 1; i++) {
            a[i] = a[i + 1];
        }
        printf("Elements after deletion \n");
        for (i = 0; i < n - 1; i++) {
            printf("%d \n", a[i]);
        }
    } else if (option == 'i') {
        printf("Enter the location on wich element is to be inserted \n");
        scanf("%d", &loc);
        printf("Which element");
        scanf("%d", &ins);
        for (i = n - 1; i >= loc; i--)
            a[i + 1] = a[i];
        a[loc] = ins;
        printf("Elements after insertion \n");
        for (i = 0; i < n + 1; i++) {
            printf("%d \n", a[i]);
        }


    }


    getch();
}