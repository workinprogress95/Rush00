/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahmben-s <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/19 09:02:47 by ahmben-s          #+#    #+#             */
/*   Updated: 2024/05/19 16:12:02 by ahmben-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	write_row(int col, int isLast);
void	write_col(int col);
void	rush(int row, int col);

int	main(void)
{
	rush(5, 0);
	return (0);
}
