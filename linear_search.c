/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
#include <string.h>

typedef struct {
  char *key;
  int value;
} item;

item *linear_search (item * items, size_t size, const char *key)
{
  for (size_t i = 0; i < size; i++) {
	  //if (strcmp((items+i)->key, key) == 0) {
	  // return (items+i);
	  // }    
	  if (strcmp (items[i].key, key) == 0) {
		  return &items[i];
	  }
  }
  return NULL;
}

int main (void) {
  item items[] = {
	  {"foo", 10}, {"bar", 42}, {"bazz", 36}, {"buzz", 7},
	  {"bob", 11}, {"jane", 100}, {"x", 200}
  };
  size_t num_items = sizeof (items) / sizeof (item);
  char *key = "bob";

  item *found = linear_search (items, num_items, key);
  if (!found)	{
	  return 1;
	}
  printf ("linear_search: value of 'bob' is %d\n", found->value);
  return 0;
}
