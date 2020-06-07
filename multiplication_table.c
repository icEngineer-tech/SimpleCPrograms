#include <stdio.h>

void mult(int);
/* I didn't provide for i = 1 & for i = 0 (it's trivial) */
int main()
{
    mult(5);    // and you can test what you want
    return 0;
}
void mult(int i)
{
    switch(i)
    {
        case 2:
        for(int j=0;j<10;j++)
        {
            printf("%i * %i = %i\n",i,j,i*j);
        }
        break;
        case 3:
        for(int j=0;j<10;j++)
        {
            printf("%i * %i = %i\n",i,j,i*j);
        }
        break;
        case 4:
        for(int j=0;j<10;j++)
        {
            printf("%i * %i = %i\n",i,j,i*j);
        }
        break;
        case 5:
        for(int j=0;j<10;j++)
        {
            printf("%i * %i = %i\n",i,j,i*j);
        }
        break;
        case 6:
        for(int j=0;j<10;j++)
        {
            printf("%i * %i = %i\n",i,j,i*j);
        }
        break;
        case 7:
        for(int j=0;j<10;j++)
        {
            printf("%i * %i = %i\n",i,j,i*j);
        }
        break;
        case 8:
        for(int j=0;j<10;j++)
        {
            printf("%i * %i = %i\n",i,j,i*j);
        }
        break;
        case 9:
        for(int j=0;j<10;j++)
        {
            printf("%i * %i = %i\n",i,j,i*j);
        }
        break;
        
    }
}
