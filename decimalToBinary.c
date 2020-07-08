#include <stdio.h>

void Bin_8_b(char x)	// conversion from decimal to binary (8 bits long)
{
	printf("the value of %d in binary is: %i%i%i%i%i%i%i%i\n", x\
		, (x & 0x80) ? 1 : 0, (x & 0x40) ? 1 : 0, (x & 0x20) ? 1 : 0, (x & 0x10) ? 1 : 0\
		, (x & 0x8) ? 1 : 0, (x & 0x4) ? 1 : 0, (x & 0x2) ? 1 : 0, (x & 0x1) ? 1 : 0);
}
void Bin_16_b(short x) // conversion from decimal to binary (16 bits long)
{
	printf("the value of %d in binary is: %d%d%d%d%d%d%d%d%d%d%d%d%d%d%d%d\n",x\
											, (x & 0x8000) ? 1 : 0,  (x & 0x4000) ? 1 : 0, (x & 0x2000) ? 1 : 0, (x & 0x1000) ? 1 : 0\
											, (x & 0x800) ? 1 : 0, (x & 0x400) ? 1 : 0, (x & 0x200) ? 1 : 0, (x & 0x100) ? 1 : 0\
											, (x & 0x80) ? 1 : 0, (x & 0x40) ? 1 : 0, (x & 0x20) ? 1 : 0, (x & 0x10) ? 1 : 0\
											, (x & 0x8) ? 1 : 0, (x & 0x4) ? 1 : 0, (x & 0x2) ? 1 : 0, (x & 0x1) ? 1 : 0);
}
int main()
{
	Bin_16_b(64200);
	Bin_8_b(250);
	return 0;
}
