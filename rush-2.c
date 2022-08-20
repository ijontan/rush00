/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush-2.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: itan <itan@student.42kl.edu.my>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/19 18:03:08 by itan              #+#    #+#             */
/*   Updated: 2022/08/20 14:49:59 by itan             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);
void	check_print(int i, int j, int r, int c);

void	rush(int c, int r)
{
	int		i;
	int		j;
	char	nl;

	nl = '\n';
	i = 0;
	while (i < r)
	{
		j = 0;
		while (j < c)
		{
			check_print(i, j, r, c);
			j++;
		}
		ft_putchar(nl);
		i++;
	}
}

void	check_print(int i, int j, int r, int c)
{
	if ((i == 0 && j == 0) || (i == r - 1 && j == 0))
	{
		ft_putchar('A');
	}
	else if ((i == 0 && j == c - 1) || (i == r - 1 && j == c - 1))
	{
		ft_putchar('C');
	}
	else if (i == 0 || j == 0 || i == r - 1 || j == c - 1)
	{
		ft_putchar('B');
	}
	else
	{
		ft_putchar(' ');
	}
}
