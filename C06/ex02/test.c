#include<unistd.h>

void    ft_char(char c)
{
    write(1, &c, 1);
}

void    ft_putstr(char *str)
{
    int    i;

    i = 0;
    while (str[i] != '\0')
    {
        ft_char(str[i]);
        i++;
    }
}

int    main(int argc, char **argv)
{
    int    j;

    j = argc - 1;
    while (j >= 1)
    {
        ft_putstr(argv[j]);
        ft_char('\n');
        j--;
    }
    return (0);
}

