
//Header 
#include <stdio.h>
#include <string.h>
#include <stdbool.h> 


#if !defined (NDEBUG) 
   #define TRACE(MSG) \
        fprintf(stderr, MSG)
#else
#define TRACE(MSG) 
#endif







int main() {
   // printf() displays the string inside quotation
   TRACE("Main Method ");
   printf("Hello, World!");
   return 0;
}