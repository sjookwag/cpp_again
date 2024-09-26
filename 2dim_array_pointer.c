/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int arr[2][3]={{1,2,3},{4,5,6}};
    
    for(int(*row)[3]=arr;row<arr+2;row++){
      for(int*col=*row;col<*row+3;col++)
        printf("%d ",*col);
      printf("\n");
    }
    return 0;
}
