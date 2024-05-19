/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush02x.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahmben-s <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/19 13:38:48 by ahmben-s          #+#    #+#             */
/*   Updated: 2024/05/19 15:42:05 by ahmben-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	write_row(int col, int isLast)
{
	char	edge;
	int		i;

	if (isLast > 0)
	{
		edge = 'C';
	}
	else
	{
		edge = 'A';
	}
	i = 0;
	while (i < col)
	{
		if (i == 0 || i == col - 1)
		{
			write(1, &edge, 1);
		}
		else
		{
			write(1, "B", 1);
		}
		i++;
	}
}

void	write_col(int col)
{
	int	i;

	write(1, "B", 1);
	i = 1;
	while (i < col)
	{
		if (i == col - 1)
		{
			write(1, "B", 1);
		}
		else
			write(1, " ", 1);
		i++;
	}
	write(1, "\n", 1);
}

void	rush(int col, int row)
{
	int	i;

	if (col <= 0 || row <= 0)
		return ;
	i = 0;
	while (i < row)
	{
		if (i == 0 || i == row - 1)
		{
			write_row(col, i);
			if (i == 0 && row > 1)
				write(1, "\n", 1);
		}
		else
			write_col(col);
		i++;
	}
}

int	main(void)
{
	rush(10, 10);
	return (0);
}
