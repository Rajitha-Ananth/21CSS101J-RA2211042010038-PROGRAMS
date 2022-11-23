#include <stdio.h>
#include <string.h>
int main() {
   char str1[100] = "hello",str2[] = "world";
   strcat(str1, str2);

   puts(str1);

   return 0;
}
