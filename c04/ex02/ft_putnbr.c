/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/07 14:27:41 by marvin            #+#    #+#             */
/*   Updated: 2025/05/07 14:27:41 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

 #include <unistd.h>

void ft_putchar(char c)
{
	write (1, &c, 1);
}

void ft_putnbr(int nb)
{
	if (nb < 0)
	{
		ft_putchar ('-');
		nb *= -1;
	}
	if (nb >= 10)
	{
		ft_putnbr(nb / 10);
		nb = nb % 10;
	}
	if (nb < 10)
		nb = nb + 48;
	ft_putchar(nb);
}

int main (void)
{
	ft_putnbr(42);
	return (0);
}
