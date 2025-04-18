/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_foreach.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dedantas <dedantas@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/06 19:06:33 by dedantas          #+#    #+#             */
/*   Updated: 2025/04/06 19:07:12 by dedantas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_foreach(int *tab, int length, void (*f)(int))
{
	int	n;

	n = 0;
	if (!tab || !f)
		return ;
	while (n < length)
	{
		f(tab[n]);
		n++;
	}
}
