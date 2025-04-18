/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dedantas <dedantas@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/20 10:16:55 by dedantas          #+#    #+#             */
/*   Updated: 2025/04/02 13:16:26 by dedantas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	if (b)
	{
		*div = a / b;
		*mod = a % b;
	}
}

/*int		main(void)
{
	int		div, mod, n, n1;

	n = 42;
	n1 = 21;
	ft_div_mod(n, n1, &div, &mod);
	printf("\n%d/%d = %d Resto %d\n\n", n, n1, div, mod);
}*/
