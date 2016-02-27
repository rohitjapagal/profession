#include <stdio.h>
#include <stdlib.h>

void no_space(char *ptr) {
 int count = 0;
 char *temp = ptr;

 while(*temp != '\0') {
 if (*temp != ' ')
 {
   ptr[count++] = *temp;
 }
 temp++;
 }
 ptr[count] = '\0';
}
int main (void) {
 char ptr_word[] = "Ran ga r a jan";
 printf(" Before no_space func : %s\n",ptr_word);
 no_space(ptr_word);
 printf(" After no_space func : %s\n",ptr_word);
 return 0;
 }
