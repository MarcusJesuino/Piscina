/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: masantos <masantos@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/22 16:59:59 by masantos          #+#    #+#             */
/*   Updated: 2025/04/22 17:26:42 by masantos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	ft_swap(int *a, int *b)
{
	int var;
	var = *a;

	*a = *b;
	*b = var;

}

int main(void)
{
	int num1;
	int num2;

	num1 = 1;
	num2 = 2;
	ft_swap(&num1, &num2);
	printf("%d", num1);
	printf("%d", num2);
}
