#include <stdio.h>


void Bin_16_b(short x) // conversion from decimal to binary (16 bits long)
{
	printf("the value of %d in binary is: %d%d%d%d%d%d%d%d%d%d%d%d%d%d%d%d\n",x\
											, (x & 0x8000) ? 1 : 0,  (x & 0x4000) ? 1 : 0, (x & 0x2000) ? 1 : 0, (x & 0x1000) ? 1 : 0\
											, (x & 0x800) ? 1 : 0, (x & 0x400) ? 1 : 0, (x & 0x200) ? 1 : 0, (x & 0x100) ? 1 : 0\
											, (x & 0x80) ? 1 : 0, (x & 0x40) ? 1 : 0, (x & 0x20) ? 1 : 0, (x & 0x10) ? 1 : 0\
											, (x & 0x8) ? 1 : 0, (x & 0x4) ? 1 : 0, (x & 0x2) ? 1 : 0, (x & 0x1) ? 1 : 0);
}
short dec_ope(short x)
{
	short aid = 1;
	short tab[16] = { 0x1, 0x2, 0x4,0x8,0x10,0x20,0x40,0x80,0x100,0x200,0x400,0x800,0x1000,0x2000,0x4000,0x8000 };
	if (!(~x & aid))
	{
		x ^= aid;
		return x;
	}
	else
	{
		
		for (int i = 0; i < 16; i++)
		{
			//if (i == 6)
			//	continue;
			if ((~x & tab[i]) & aid)
			{
				aid = (aid << 1) + 1;
			}
		}
		x ^= aid;
		return x;
	}
}
int main()
{
	short value = dec_ope(21410);
	Bin_16_b(value);
	return 0;
}
