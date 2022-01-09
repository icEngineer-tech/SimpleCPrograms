#include <stdio.h>

int main() 
{
    int n;
    scanf("%d", &n);
    while(n)
    {
        if(!(n&1))
        {
            printf("This number is not fully of 1's");
            return -1;
        }
        n >>= 1;
    }
    printf("This number is full of 1's");;
    
    return 0;
}
