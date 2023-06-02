// Brian Kim
#include <stdio.h>

int x[] = {3, 37, 2, 7, 41, 0};

int main()
{
    int *s0 = x;
    int s1 = 0; //sum
    int s2;

    while(*s0 != 0)
    {
        if((*s0 != 0) && (*s0 < 40))
            s1 = s1 + *s0;

        s0 = s0 + 1;
    }

    printf("Total is %d\n", s1);
}