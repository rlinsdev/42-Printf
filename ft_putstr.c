/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlins <rlins@student.42sp.org.br>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/17 03:51:08 by rlins             #+#    #+#             */
/*   Updated: 2022/06/17 18:03:25 by rlins            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putstr(char* str)
{
	int	i;

	i = 0;
	if (str == NULL)
		str = STR_NULL;
	while (str[i])
	{
		ft_putchar(str[i]);
		i++;
	}
	return (i);
}
