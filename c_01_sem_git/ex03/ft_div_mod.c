/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pguilher <pguilher@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/02 20:15:32 by pguilher          #+#    #+#             */
/*   Updated: 2020/12/02 23:41:13 by pguilher         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void ft_div_mod(int a, int b, int *div, int *mod);

void ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a % b;
	
}

int		main()
{
	int div;
	int mod;	

	div = 0;
	mod = 0;
	
	ft_div_mod(10, 2, &div, &mod);

	printf("res div %d\n", div);
	printf("res mod %d\n", mod);
}