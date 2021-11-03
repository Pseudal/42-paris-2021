/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agarnier <agarnier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/02 17:44:27 by agarnier          #+#    #+#             */
/*   Updated: 2021/11/02 17:44:36 by agarnier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

void	ft_char(char c)
{
	write(1, &c, 1);
}

void	ft_putstr(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		ft_char(str[i]);
		i++;
	}
}

int	main(int argc, char **argv)
{
	int	j;

	j = 1;
	while (argc != j)
	{
		ft_putstr(argv[j]);
		ft_char('\n');
		j++;
	}
	return (0);
}
