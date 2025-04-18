/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dedantas <dedantas@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/02 14:47:05 by dedantas          #+#    #+#             */
/*   Updated: 2025/04/06 20:34:34 by dedantas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int	*ft_range(int min, int max)
{
	int	*range;
	int	size;
	int	i;

	if (min >= max)
		return (NULL);
	size = max - min;
	range = (int *)malloc(sizeof(int) * size);
	if (range == NULL)
		return (NULL);
	i = 0;
	while (i < size)
	{
		range[i] = min + i;
		i++;
	}
	return (range);
}

/*int main()
{
    int *range;
    int min;
    int max;
    int i;

    min = 5;
    max = 10;

    range = ft_range(min, max);

    if (range == NULL)
    {
        printf("Erro: min é maior ou igual a max.\n");
        return (1);
    }

    printf("Valores no intervalo [%d, %d]:\n", min, max);
    i = 0;
    while (i < max - min)
    {
        printf("%d ", range[i]);
        i++;
    }
    printf("\n");

    // Libera a memória alocada
    free(range);

    return (0);
}*/
