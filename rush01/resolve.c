/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   resolve.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lcalvie <lcalvie@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/23 15:39:10 by lcalvie           #+#    #+#             */
/*   Updated: 2021/10/24 14:48:02 by agarnier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		count_view_up(int *tab_in, int n);
int		count_view_down(int *tab_in, int n);
int		count_view_left(int *tab_in, int n);
int		count_view_right(int *tab_in, int n);
void	print_error(void);
void	print_tab_in(int *tab_in, int size);

int	check_col(int *tab_in, int n)
{
	int	i;

	i = n - 4;
	while (i >= 0)
	{
		if (tab_in[i] == tab_in[n])
			return (0);
		i -= 4;
	}
	return (1);
}

int	check_line(int *tab_in, int n)
{
	int	i;

	i = n - (n % 4);
	while (i < n)
	{
		if (tab_in[i] == tab_in[n])
			return (0);
		i++;
	}
	return (1);
}

int	check_poss(int *tab_in, int *tab_out, int n)
{
	if (!check_line (tab_in, n))
		return (0); 
	if (check_col(tab_in, n) == 0)
		return (0);
	if (n % 4 == 3) // fin de ligne
	{
		if (count_view_left(tab_in, n) != tab_out[8 + n / 4])
			return (0);
		if (count_view_right(tab_in, n) != tab_out[12 + n / 4])
			return (0);
	}
	if (n / 4 == 3) //fin de cologne
	{
		if (count_view_up(tab_in, n) != tab_out[n % 4])
			return (0);
		if (count_view_down(tab_in, n) != tab_out[4 + n % 4])
			return (0);
	}
	return (1);
}

void	resolve(int *tab_in, int *tab_out, int n)
{
	if (n >= 16 || n < 0)
	{
		if (n >= 16)
			print_tab_in(tab_in, 16);
		else
			print_error();
	}
	else
	{
		tab_in[n]++;//ajoute +1 a n
		if (tab_in[n] > 4) // si superieur a 4 (5 si faux)
		{
			tab_in[n] = 0;
			resolve(tab_in, tab_out, n - 1); // -1 reourne en arriere 
		}
		else if (check_poss(tab_in, tab_out, n))
			resolve(tab_in, tab_out, n + 1);// avance d'une cae
		else // si la possibilite n est pas bonne 
			resolve(tab_in, tab_out, n); // relance resolve
	}
}
