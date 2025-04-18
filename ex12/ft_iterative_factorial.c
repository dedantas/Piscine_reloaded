/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dedantas <dedantas@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/06 20:23:20 by dedantas          #+#    #+#             */
/*   Updated: 2025/04/06 21:23:04 by dedantas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_iterative_factorial(int nb)
{
	int	i;

	if (nb < 0)
		return (0);
	i = 1;
	while (nb > 0)
	{
		i *= nb;
		nb--;
	}
	return (i);
}

/*int	main(void)
{
	printf("%i", ft_iterative_factorial(3));
}*/
