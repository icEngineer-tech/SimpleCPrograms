#include <stdio.h>

#define N 10

int queue[N];


void dequeue()
{
    queue[N-1] = 0;
}

void enqueue(int n)
{
    for(int i = N - 1; i >= 1; i--)
        queue[i] = queue[i-1];
    queue[0] = n;
}

int top()
{
    return queue[N-1];
}

int main() {
    for(int i = 0; i < N; i++)
        printf("%d ", queue[i]);
    printf("\n");
    enqueue(4);
    enqueue(7);
    enqueue(14);
    enqueue(74);
    for(int i = 0; i < N; i++)
        printf("%d ", queue[i]);
    printf("\n");
    enqueue(49);
    enqueue(77);
    enqueue(34);
    enqueue(71);
    enqueue(40);
    enqueue(70);
    enqueue(94);
    enqueue(732);
    enqueue(447);
    enqueue(764);
    enqueue(714);
    enqueue(877);
    dequeue();
    for(int i = 0; i < N; i++)
        printf("%d ", queue[i]);
    printf("\nThe top is %d", top());
    return 0;
}
