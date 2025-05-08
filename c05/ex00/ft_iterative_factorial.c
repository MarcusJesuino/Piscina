/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/08 00:25:33 by marvin            #+#    #+#             */
/*   Updated: 2025/05/08 00:25:33 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_iterative_factorial(int nb)
{
	int	res;

	res = 1;
	if (nb < 0)
		return (0);
	while (nb != 0)
	{
		res *= nb;
		nb--;
	}
	return (res);
}
int main(void)
{
	int res = ft_iterative_factorial(4);
	printf ("%d", res);
	return (0);
}
