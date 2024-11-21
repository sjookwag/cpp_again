#include <stdio.h> //함수가 선언된 헤더 파일

//strcat 구현
char *my_strcat(char *d, const char *s)
{
    char *p = d;
    while(*d) d++;
    while(*s) *d++ = *s++;
    *d = '\0';
    return p;
}

//strncat 구현
char *my_strncat(char *d, const char *s, size_t sz)
{
    char *p = d;
    while(*d) d++;
    while(*s && sz-- > 0) *d++ = *s++;
    *d = '\0';
    return p;
}

int main()
{
    /* str1의 여유 크기가 str2 문자열을 담을수 있어야 한다.*/
    char str1[10] = "abc";
    char str2[] = "def";
    char str3[] = "ghi";

    /*strcat*/
    strcat(str1, str2);
    printf("strcat : %s\n", str1);

    /*strcat*/
    strncat(str1, str3,2); //2개까지 붙이기
    printf("strncat : %s\n", str1);

    //my_strcat
    my_strcat(str1, str2);
    printf("my_strcat : %s\n", str1);

    //my_strncat
    my_strncat(str1, str3,2); //2개까지 붙이기
    printf("my_strncat : %s\n", str1);
    return 0;
}
