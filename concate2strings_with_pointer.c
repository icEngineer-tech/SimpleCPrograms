#include <stdio.h>
#include <stdlib.h>


char* conct(const char* s, const char* s1)
{
	char* res = (char*)malloc(len(s) + len(s1) + 1);
	int i = 0;
	while (*s)
	{
		*(res+i) = *s;
		s++;
		i++;
	}
	while (*s1)
	{
		*(res+i) = *s1;
		s1++;
		i++;
	}
	*(res+i) = '\0';
	return res;
}

int main()
{
	const char* str = "hello";      // see, I'm using pointer to char because I allocated a new mem to an other string inside the function
	const char* str2 = " world";
	char* res = conct(str, str2);
	printf("%s", res);
	free(res);
	/*char* rs = reverse(str);
	printf("%s", rs);
	delete_char(rs);*/
	return 0;
}
