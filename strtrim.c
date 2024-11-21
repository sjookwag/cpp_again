#include <ctype.h>
#include <stdio.h>
#include <string.h>

char *ltrim(char *s)
{
    while(isspace(*s)) s++;
    return s;
}

char *rtrim(char *s)
{
    char* back = s + strlen(s);
    while(isspace(*--back));
    *(back+1) = '\0';
    return s;
}

char *trim(char *s)
{
    return rtrim(ltrim(s));
}

int main() {
    char str[] = " Hello World ";

    printf("%c%s%c\n", '|', ltrim(str), '|');
    printf("%c%s%c\n", '|', rtrim(str), '|');
    printf("%c%s%c\n", '|', trim(str), '|');

    return 0;
}
