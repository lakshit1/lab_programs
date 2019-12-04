#include<stdio.h>
#include<conio.h>
#include<string.h>

void main() {
    char str[100], a;
    int i, vo = 0, co = 0, space = 0, other = 0;
    clrscr();
    printf("Enter the string \n");
    gets(str);
    for (i = 0; str[i] != '\0'; i++) {
        a = toupper(str[i]);
        if (a == 'A' || a == 'E' || a == 'I' || a == 'O' || a == 'U')
            vo++;
        else if (a > 'A' && a <= 'Z')
            co++;
        else if (a == ' ' || a == '\t')
            space++;
        else other++;

    }
    printf(" Vowels = %d \n consonants = %d \n space = %d \n others = %d", vo, co, space, other);
    getch();
}