#include <stdio.h>
#include <math.h>

int swap(int n, unsigned bit1, unsigned bit2)
{
    return ((int)pow(2, bit1-1) & n)<<abs(bit2-bit1) | ((int)pow(2, bit2-1) & n) >>abs(bit2-bit1) | ((0xffffffff- (int)pow(2, bit1-1) - (int)pow(2, bit2-1)) & n);
}

int main() 
{
    printf("%d", swap(10, 1, 4));
    return 0;
}
