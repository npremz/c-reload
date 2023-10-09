/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: npremont <npremont@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/09 14:51:52 by npremont          #+#    #+#             */
/*   Updated: 2023/10/09 17:51:46 by npremont         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int	res;

	if (nb < 0)
		return (0);
	res = 1;
	while (nb > 0)
	{
		res *= nb;
		--nb;
	}
	return (res);
}

// #include <stdio.h>

// int	main(void)
// {
// 	printf("%d\n", ft_iterative_factorial(5));
// 	return (0);
// }