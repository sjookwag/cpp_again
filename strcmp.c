#include <stdio.h>

int my_strcmp(char* str1, char* str2)
{
    int i = 0;
    // 한쪽 문자열이 끝날 때까지 비교 수행
    while (str1[i] != '\0' || str2[i] != '\0') {
        // 문자 같으면 계속 비교
        if (str1[i] == str2[i]) {
            i++;
            continue;
        }
        // 앞의 문자가 더 크면 1 리턴
        else if (str1[i] > str2[i])return 1;
        // 뒤의 문자가 더 크면 -1 리턴
        else if (str1[i] < str2[i])return -1;

        i++;
    }

    // 어느 한쪽 문자열이 끝났고 i - 1 까지 모두 같은 상태
    if (str1[i] == str2[i])return 0; // str1[i] == str2[i] == '\0' 이라면 0 리턴
    else if (str1[i] != '\0')return 1; // str1에 글자가 남아있으면 1 리턴
    else return -1;	// str2에 글자가 남아있으면 -1 리턴
}

int my_strncmp(char* str1, char* str2, int n)
{
    int i = 0;
    // 한쪽 문자열이 끝날 때까지 또는 n 보다 작을 때 비교 수행
    while (i < n && (str1[i] != '\0' || str2[i] != '\0')) {
        // 문자 같으면 계속 비교
        if (str1[i] == str2[i]) {
            i++;
            continue;
        }
        else if (str1[i] > str2[i]) return 1; // 앞의 문자가 더 크면 1 리턴
        else if (str1[i] < str2[i]) return -1; // 뒤의 문자가 더 크면 -1 리턴

        i++;
    }

    // 어느 한쪽 문자열이 끝나거나 n 갯수만큼 비교한 후
    if (n == i)return 0; //i == n이라면 찾는 갯수 안의 문자는 모두 같음, 0 리턴
    else if (str1[i] == '\0' && str2[i] == '\0')return 0; //문자열 끝났으면 0 리턴
    else if (str1[i] > str2[i])return 1; //둘 중 하나라도 문자열 남아 있으면 비교
    else return -1;
}

int main()
{
    char s1[10] = "aaa";
    char s2[10] = "aab";

    printf("my_strcmp : %d\n",my_strcmp(s1,s2)); //strcmp
    printf("my_strncmp : %d\n",my_strncmp(s1,s2,2)); //strncmp

    return 0;
}
