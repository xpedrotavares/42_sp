/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pguilher <pguilher@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/01 19:12:56 by pguilher          #+#    #+#             */
/*   Updated: 2020/12/02 01:27:51 by pguilher         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void ft_swap(int *a, int *b);

void ft_swap(int *a, int *b)
{
	int tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;

}

int	main(void)
{
	int c;
	int f;
	f = 10;
	c = 20;
	ft_swap(&f, &c);
	printf("var c %d\n", c);
	printf("var f %d\n", f);

}