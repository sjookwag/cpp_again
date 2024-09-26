/* source : https://modoocode.com/25
1. sizeof 와 주소값 연산자와 함께 사용할 때를 제외하면, 배열의 이름은 첫 번째 원소를 가리킨다.
2. arr[i] 와 같은 문장은 사실 컴파일러에 의해 *(arr + i) 로 변환된다
*/
#include <stdio.h>
int main() {
  int arr[3] = {1, 2, 3};
  int *parr;

  parr = arr;
  /* parr = &arr[0]; 도 동일하다! */

  printf("arr[1] : %d \n", arr[1]);
  printf("parr[1] : %d \n", parr[1]);
  return 0;
}
