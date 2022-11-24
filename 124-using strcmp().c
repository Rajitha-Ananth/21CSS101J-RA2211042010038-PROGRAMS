#include <stdio.h>
#include <string.h>
int main() {
  char str1[] = "hello", str2[] = "world", str3[] = "hi";
  int result;
  printf("RA2211042010038\n");
  result = strcmp(str1, str2);
  printf("strcmp(str1, str2) = %d\n",result);
  result = strcmp(str1, str3);
  printf("strcmp(str1, str3) = %d\n",result);
  return 0;
}
