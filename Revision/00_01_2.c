#include<unistd.h>
//aff_first_param
char ft_putchar(char c)
{
    write(1, &c, 1);
}

char ft_putstr(char *str)
{
    int i;
    i = 0;
    while(str[i])
    {
        ft_putchar(str[i]);
        i++;
    }
}


int	main(int ac, char **av)
{
int i;
i = 0;
    while(av[i])
    {
        i++;
    }

    if(ac < 2)
    {
        write(1, "\n", 1);
        return(0);
    }
    else
    {
        ft_putstr(av[0 + (i - 1)]);
    }
}