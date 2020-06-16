#include <stdio.h>

// this program will let you to verify whether your architecture is big or little endian


int main()
{
	int a = 245;      // a = 00000000 00000000 00000000 11110101
	int* pA = &a;
	char* pC = (char*)(pA);
  printf("a = %c",*pC); /* the output will be 111101010 which the code of § so it's a little endian, if you get nothing on the screen 
  return 0;                then you architecture is big endian (because the null terminator its code is 0. */
}
