/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   show.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lcalvie <lcalvie@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/23 15:25:25 by lcalvie           #+#    #+#             */
/*   Updated: 2021/10/24 14:33:39 by agarnier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	print_tab_in(int *tab_in, int size)
{
	int	i;

	i = 0;
	while (i < size)
	{
		ft_putchar(tab_in[i] + '0');
		if (i % 4 == 3)
			ft_putchar('\n');
		else
			ft_putchar(' ');
		i++;
	}
}

void	print_error(void)
{
	write(1, "Error\n", 6);
}
