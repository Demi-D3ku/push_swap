#include "push_swap.h"

void    free_split(char **spl)
{
    int i;

    i = 0;
    while(spl[i])
    {
        free(spl[i]);
        i++;
    }
    free(spl);
}
