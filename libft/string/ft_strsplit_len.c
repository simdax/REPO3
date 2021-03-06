/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit_len.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scornaz <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/15 13:51:12 by scornaz           #+#    #+#             */
/*   Updated: 2018/01/17 11:22:18 by scornaz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strsplit_len(char **str)
{
	int	i;

	i = 0;
	if (str)
		while (*str++)
			++i;
	return (i);
}
