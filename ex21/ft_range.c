/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: npremont <npremont@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/09 17:17:47 by npremont          #+#    #+#             */
/*   Updated: 2023/10/09 17:36:42 by npremont         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	*range;
	int	i;

	if (min >= max)
		return (NULL);
	i = 0;
	range = malloc((max - min) * sizeof(int));
	while (i < max - min)
	{
		range[i] = i + min;
		i++;
	}
	return (range);
}
