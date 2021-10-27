#include<unistd.h>
int ft_char(char c)
{
    write(1, &c, 1);
    write(1, " ", 1);
}

void ft_putstr(char *str)
{
    int i;
    i = 0;

    while(str[i])
    {
        ft_char(str[i]);
        i++;
    }
i = 0;
}
