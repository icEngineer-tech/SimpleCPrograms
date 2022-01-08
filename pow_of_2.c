#include <stdio.h>

int main() 
{
    int n;
    scanf("%d", &n);
    if(n & (n-1))
        printf("Not power of 2");
    else
        printf("Power of 2");
    return 0;
}
