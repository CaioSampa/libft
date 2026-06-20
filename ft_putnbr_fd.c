/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: casampai <casampai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/20 17:52:18 by casampai          #+#    #+#             */
/*   Updated: 2026/06/20 18:01:08 by casampai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	char	*str_nbr;
	int		i;

	str_nbr = ft_itoa(n);
	while (str_nbr[i])
		ft_putchar_fd(str_nbr[i++], fd);
}
