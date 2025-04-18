/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dedantas <dedantas@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/20 11:21:30 by dedantas          #+#    #+#             */
/*   Updated: 2025/04/02 15:03:55 by dedantas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

/*int	main(int argc, char **argv)
{
	if (argc != 2)
	{
		printf("usage: a.out \"string to check\"\n");
		return (1);
	}
	printf("%d\n", ft_strlen(argv[1]));
}*/
