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
}
*/

int	main(int ac, char **av)
{
	int i;
	i = 0;
	
    if(ac != 2)
    {
        write(1, "\n", 1);
        return(0);
    }
	while(av[1][i])
	{
	
	if(av[1][i] == 'a')
		write(1, "a", 1); 
	if(av[1][i] == 'b')
		write(1, "bb", 2); 
	if(av[1][i] == 'c')
		write(1, "ccc", 3); 
	if(av[1][i] == 'd')
		write(1, "dddd", 4); 
	if(av[1][i] == 'e')
		write(1, "eeeee", 5); 		
	if(av[1][i] == 'f')
		write(1, "ffffff", 6); 
	if(av[1][i] == 'g')
		write(1, "ggggggg", 7); 
	if(av[1][i] == 'h')
		write(1, "hhhhhhhh", 8); 
	if(av[1][i] == 'i')
		write(1, "iiiiiiiii", 9); 
	if(av[1][i] == 'j')
		write(1, "jjjjjjjjjj", 10); 
	if(av[1][i] == 'k')
		write(1, "kkkkkkkkkkk", 11); 
	if(av[1][i] == 'l')
		write(1, "llllllllllll", 12); 
	if(av[1][i] == 'm')
		write(1, "mmmmmmmmmmmmm", 13); 
	if(av[1][i] == 'n')
		write(1, "nnnnnnnnnnnnnn", 14); 
	if(av[1][i] == 'o')
		write(1, "ooooooooooooooo", 15); 
	if(av[1][i] == 'p')
		write(1, "pppppppppppppppp", 16); 
	if(av[1][i] == 'q')
		write(1, "qqqqqqqqqqqqqqqqq", 17); 
	if(av[1][i] == 'r')
		write(1, "rrrrrrrrrrrrrrrrrr", 18); 
	if(av[1][i] == 's')
		write(1, "ssssssssssssssssssss", 19); 
	if(av[1][i] == 't')
		write(1, "ttttttttttttttttttttt", 20); 
	if(av[1][i] == 'u')
		write(1, "uuuuuuuuuuuuuuuuuuuuuu", 21); 
	if(av[1][i] == 'v')
		write(1, "vvvvvvvvvvvvvvvvvvvvvvv", 22); 
	if(av[1][i] == 'w')
		write(1, "wwwwwwwwwwwwwwwwwwwwwwww", 23); 
	if(av[1][i] == 'x')
		write(1, "xxxxxxxxxxxxxxxxxxxxxxxxx", 24); 
	if(av[1][i] == 'y')
		write(1, "yyyyyyyyyyyyyyyyyyyyyyyyyy", 25); 
	if(av[1][i] == 'z')
		write(1, "zzzzzzzzzzzzzzzzzzzzzzzzzzz", 26); 
	if(av[1][i] >= 0 || av[1][i] <= 9)
		ft_putchar(av[1][i]); 
	i++;
	}
}
