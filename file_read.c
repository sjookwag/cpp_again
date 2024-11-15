#include <stdio.h>
#include <stdlib.h>

#define BSIZE 256

int main() {
    const char *filename = "pithy.txt";
    FILE *fp = fopen(filename, "r");
    char buffer[BSIZE];

    if (fp == NULL) {
        fprintf(stderr,"\nUnable to open file %s\n",filename);
        exit(1);
    }
    
    // how to read and print lines from file using fgets,printf
    // int n=0;
    // while (fgets(buffer, sizeof(buffer), fp) != NULL) {
    //     const int width=2;
    //     printf("%*d.\t%s",width,++n, buffer);
    // }
    // how to read and print chars from file using fgetc,putchar
    char ch;
    printf("File contents:\n");
    while((ch=fgetc(fp))!=EOF) {
        putchar(ch);
    }
    
    if (feof(fp)) {
        printf("\nEnd of file reached.\n");
    } else if (ferror(fp)) {
        printf("\nAn error occurred.\n");
    }

    fclose(fp);
    return 0;
}
