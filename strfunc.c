#include <string.h> 
#include <stdio.h>


int main(int argc, char** argv){

printf("arg1: %p (%s) \t arg2: %p (%s)\n", argv[1], argv[1], argv[2], argv[2]);


char* r1 = strstr(argv[1], argv[2]);
char* r2 = strpbrk(argv[1], argv[2]);

printf("r1: %p (%s)\n", r1, r1);
printf("r2: %p (%s)\n", r2, r2);
}




	
