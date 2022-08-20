/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush-1.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: itan <itan@student.42kl.edu.my>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/19 18:03:08 by itan              #+#    #+#             */
/*   Updated: 2022/08/20 13:13:52 by itan             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);
void	print_row(int m, char start, char mid, char end);

void	rush(int c, int r)
{
	int	i;

	i = 0;
	while (i < r)
	{
		if ((i == 0) || (i == r - 1))
		{
			print_row(c, 'A', 'B', 'C');
		}
		else
		{
			print_row(c, 'B', ' ', 'B');
		}
		i++;
	}
}

void	print_row(int c, char start, char mid, char end)
{
	int		j;
	char	nl;

	j = 0;
	while (j < c)
	{
		if (j == 0)
		{
			ft_putchar(start);
		}
		else if (j == c - 1)
		{
			ft_putchar(end);
		}
		else
		{
			ft_putchar(mid);
		}
		j++;
	}
	nl = '\n';
	ft_putchar(nl);
}
