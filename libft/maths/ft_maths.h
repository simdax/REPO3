/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_maths.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scornaz <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/21 12:20:31 by scornaz           #+#    #+#             */
/*   Updated: 2018/01/24 11:29:01 by scornaz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_MATHS_H
# define FT_MATHS_H

# include <stdlib.h>
# include <stdio.h>
# include "../libft.h"

float	ft_sqrt(float nb);
float	ft_div(float a, float b);
float	ft_root(float nb, float root);
float	ft_pow2(float nb, float pow);
double	ft_pow(double base, double power);
double	ft_pow3(double base, double power);
int		is_prime(int nb);
void	prime_factors(int nb);
int		gcd(int a, int b);

#endif
