/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: masantos <masantos@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/23 13:32:52 by masantos          #+#    #+#             */
/*   Updated: 2025/04/23 14:28:01 by masantos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void ft_ultimate_div_mod(int *a, int *b)
{
	int savediv;
	savediv = *a;

	*a = *a / *b;
	*b = savediv % *b;

}

int main(void)
{
	int a = 10;
	int b = 3;


	ft_ultimate_div_mod(&a, &b);
	printf("%d", a);
	printf("%d", b);
}
