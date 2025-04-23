/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: masantos <masantos@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/23 17:20:52 by masantos          #+#    #+#             */
/*   Updated: 2025/04/23 18:36:17 by masantos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int ft_strlen(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
	// printf("%d", i);
}

int main(void)
{
	// int nbr;
	char i[] = "peixepeixe";
	// nbr = ft_strlen(i);

	printf("%d", ft_strlen(i));
}
