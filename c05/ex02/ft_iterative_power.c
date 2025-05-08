/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/08 00:41:36 by marvin            #+#    #+#             */
/*   Updated: 2025/05/08 00:41:36 by marvin           ###   ########.fr       */
/*                                                                            */
/* ****************************************************************************/

#include <stdio.h>

int ft_iterative_power(int nb, int power)
{
	int res;

	res = 1;
	if (nb == 0 && power == 0)
		return (1);
	while (power > 0)
	{
		res = res * nb;
		power --;
	}
	return (res);
}

int main(void)
{
	printf ("%d", ft_iterative_power(3, 8));
	return (0);
}
