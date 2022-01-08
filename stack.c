#include <stdio.h>

#define MAX_SIZE 15

int stack[0];
static int size;

enum status
{
    false,
    true
};

enum status isempty()
{
    if(size == 0)
        return true;
    return false;
}
enum status pop()
{
    if(isempty())
        return false;
    size--;
    return true;
}

enum status push(int n)
{
    if(size == MAX_SIZE)
        return false;
    size++;
    stack[size-1] = n;
}

int top()
{
    return stack[size-1];
}

int main() {
    if(!pop())
        printf("Stack empty!\n");
    push(4);
    push(7);
    push(14);
    push(74);
    push(49);
    push(77);
    push(34);
    push(71);
    push(40);
    push(70);
    push(94);
    push(732);
    push(447);
    push(764);
    push(714);
    push(877);
    printf("The actual size is %d\n", size);
    printf("The top is %d", top());
    return 0;
}
