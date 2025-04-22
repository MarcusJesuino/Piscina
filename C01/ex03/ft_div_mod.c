/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: masantos <masantos@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/22 17:46:50 by masantos          #+#    #+#             */
/*   Updated: 2025/04/22 19:29:50 by masantos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void ft_div_mod(int a, int b, int *div, int *mod)
{

	*div = a / b;
	*mod = a % b;
}

int main(void)
{
	int num1 = 10;
	int num2 = 5;
	int div;
	int mod;


	ft_div_mod(num1, num2, &div, &mod);
	printf ("%d", div);
	printf ("%d", mod);
}
