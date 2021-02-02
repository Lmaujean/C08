/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_show_tab.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmaujean <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/01 15:39:51 by lmaujean          #+#    #+#             */
/*   Updated: 2021/02/02 09:13:20 by lmaujean         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "ft_stock_str.h"

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr(char *str)
{
	while (*str != '\0')
	{
		ft_putchar(*str);
		str++;
	}
	ft_putchar('\n');
}

void	ft_putnbr(int nb)
{
	unsigned int	nb2;

	if (nb < 0)
	{
		write(1, "-", 1);
		nb = nb * -1;
	}
	nb2 = nb;
	if (nb2 > 9)
	{
		ft_putnbr(nb2 / 10);
	}
	nb2 = nb2 % 10 + '0';
	write(1, &nb2, 1);
}

void	ft_show_tab(struct s_stock_str *par)
{
	while (par->str)
	{
		ft_putstr(par->str);
		ft_putnbr(par->size);
		ft_putchar('\n');
		ft_putstr(par->copy);
		par++;
	}
}
