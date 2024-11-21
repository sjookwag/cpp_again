#include <stdio.h>
#include <string.h>

//strcnp 구현
char *my_strcpy(char *dest, const char *src)
{
  char *ret = dest;
  while((*dest++ = *src++)!=0){}

  return ret;
}

//strncpy 구현
char *my_strncpy(char *dest, const char *src, size_t n)
{
  char *ret = dest;

  for(int i=0; i<n; i++)
  {
    if((*dest++ = *src++) == 0){
      while(++i < n){
        *dest++ = 0;
      }
      return ret;
    }
  }
  return ret;
}

int main(int argc, char **argv)
{
  char str1[20] = "Hello";
  char str2[20];

  memset(str2, 0x00, 20);
  my_strcpy(str2, str1); //문자열 복사 str1 -> str2

  printf("%s\n", str2);

  for(int i=1; i<=strlen(str1); i++){
      memset(str2, 0x00, 20);
      my_strncpy(str2, str1, i); //문자열 원하는 길이만큼 복사 str1 -> str2
      printf("%s\n", str2);
  }

    return 0;
}
