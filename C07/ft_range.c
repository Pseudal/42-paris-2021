#include<stdlib.h>

int *ft_range(int min, int max)
{
    int    *range;
    int        i;
    int     x;

    i = 0;
    x = max - min;
    if ( min - max >= 0 )
    return(NULL);
    range = malloc(sizeof(int) * x);
    if (range == NULL)
        return (0);        
    range[i] = min;   
    while (min != max - 1)
    {
        min = min + 1;
        i++;
        range[i] = min;        
    }    
    return(range);
}
