#include<unistd.h>
//aff_first_param
char ft_putchar(char c)
{
    write(1, &c, 1);
}

/*char ft_putstr(char *str)
{
    int i;
    i = 0;
    while(str[i])
    {
        ft_putchar(str[i]);
        i++;
    }
}*/


int	main(int ac, char **av)
{
	char	x;
	int	i;
	char	j;
	x = av[2][0];
	j = av[3][0];
	i = 0;
//	if(av[2] != 2 || av[3] != 2)
//	{
//		write(1, "\n", 1);
//		return(0);
	if(ac != 4)
	{
        	write(1, "\n", 1);
        	return(0);
        }
	else
	{
		while(av[1][i])
		{
			if(av[1][i] == x)
			{
				ft_putchar(j);
			}
			else
			{
				ft_putchar(av[1][i]);
			}
		i++;
		}
	}
}	
