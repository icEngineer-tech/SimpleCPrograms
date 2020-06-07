#include <stdio.h>

int rev_int (int);
bool palin(int);

int main()
{
    bool b = palin(1212);
    char* c=b==1?"Palindrome":"not palindrome";
    printf("%s", c);
    return 0;
}

int rev_int (int i)
{
    int res=0;
    while(i>0)
    {
    int rem = i%10;
    res=res*10+rem;
    i/=10;
    }
    return res;
}
bool palin(int i)
{
    return i==rev_int(i)?true:false;
}
