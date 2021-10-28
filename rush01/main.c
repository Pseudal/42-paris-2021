/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lcalvie <lcalvie@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/23 15:09:34 by lcalvie           #+#    #+#             */
/*   Updated: 2021/10/24 18:22:08 by agarnier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	print_error(void);
void	init_tab_in(int *tab_in, int size);
void	resolve(int *tab_in, int *tab_out, int n);
int		fill_tab_out(int *tab, char *str);
int		check_arg_recieved(char *str);

int	main(int argc, char **argv)
{
	int	tab_out[16];
	int	tab_in[16];

	if (argc == 2)
	{
		if (!check_arg_recieved(argv[1]))
		{
			print_error();
			return (0);
		}
		fill_tab_out(tab_out, argv[1]);
		init_tab_in(tab_in, 16);
		resolve(tab_in, tab_out, 0);
	}
	else
		print_error();
	return (0);
}
