/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_arg.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lcalvie <lcalvie@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/23 18:20:27 by lcalvie           #+#    #+#             */
/*   Updated: 2021/10/23 19:19:31 by lcalvie          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	check_arg_recieved(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0' && i < 31)
	{
		if ((i % 2) == 0)
		{	
			if (str[i] < '1' || str[i] > '4')
				return (0);
		}
		else
		{
			if (str[i] != ' ')
				return (0);
		}
		i++;
	}
	if (i == 31 && str[i] == '\0')
		return (1);
	return (0);
}

void	fill_tab_out(int *tab, char *str)
{
	int	i;

	i = 0;
	while (i < 16)
	{
		tab[i] = str[2 * i] - '0';
		i++;
	}
}
