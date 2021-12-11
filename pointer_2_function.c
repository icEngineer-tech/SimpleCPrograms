#include <stdio.h>

int add(int a, int b)
{
  return a + b;
}
int mul(int a, int b)
{
    return a * b;
}
int weightedFunc(int a, int(*f)(int, int))
{
    return f(a * 7, a * 9);
}
    
int main()
{
  //how to create a buffer that contains functions :D
    int(*func[])(int, int) = { add, mul };
    printf("%d\n", func[1](4, 5));
  
    //how to assign a function to a pointer to function
    int(*f)(int, int) = add;
    printf("%d\n", f(7, 9));
  
    printf("%d\n", weightedFunc(2, f));
    return 0;
}
