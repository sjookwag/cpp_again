#include <stdio.h>

char* my_strtok(char* str, const char* delimiters ){
   static char* pCurrent;
   char* pDelimit;

   if ( str != NULL )pCurrent = str;
   else str = pCurrent;

   if(*pCurrent == '\0') return NULL;

   //문자열 점검
   while (*pCurrent)
   {
       pDelimit = (char*)delimiters ;
       
       while (*pDelimit){
         if(*pCurrent == *pDelimit){
               *pCurrent = '\0';
               ++pCurrent;
               return str;
            }
            ++pDelimit;
       }
       ++pCurrent;
   }
    // 더이상 자를 수 없다면 NULL반환
    return str;
}

int main(){
  char str[] = "MY NAME IS TOM"; //대상 문자열 
  char *temp = my_strtok(str," "); //공백을 기준으로 문자열 자르기
  
  while (temp != NULL) { //널이 아닐때까지 반복
      printf("%s\n",temp); // 출력
      temp = my_strtok(NULL, " ");	//널문자를 기준으로 다시 자르기
  }
}
