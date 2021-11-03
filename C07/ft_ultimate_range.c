#include<stdlib.h>

int ft_ultimate_range(int **range, int min, int max)
{
    int    i;
    int    x;

    i = 0;
    x = max - min;
    if ( min - max >= 0 )
        return(0);
    *range = malloc(sizeof(int) * x);
    if (*range == NULL)
        return (0);        
    (*range)[i] = min;   
    while (min != max - 1)
    {
        min = min + 1;
        i++;
        (*range)[i] = min;        
    }    
    return(x);
}

#include <stdio.h>

int    main(void)
{
    int *range;

    printf("Warn: Any segfault will mean that arrays are not correctly allocated\n");

    printf("5:%d\n", ft_ultimate_range(&range, 0, 5));
    printf("0, 1, 2, 3, 4 : %d, %d, %d, %d, %d\n", range[0], range[1], range[2], range[3], range[4]);
    
    printf("0:%d\n", ft_ultimate_range(&range, 3, 3));
    
    printf("2:%d\n", ft_ultimate_range(&range, -1, 1));
    printf("-1, 0 : %d, %d", range[0], range[1]);
}
