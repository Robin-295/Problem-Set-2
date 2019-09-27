#include <stdio.h>
int main(void)
{
    int stacks = 5;
    int i = 1;
    int x = 1;
    for (i=1; i <= stacks; i++)
    {
        for (x=1; x<=i; x++)
    {
        printf("#");
    }
    printf("\n");
}
}