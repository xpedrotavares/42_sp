/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ft.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pguilher <pguilher@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/30 23:15:01 by pguilher          #+#    #+#             */
/*   Updated: 2020/12/02 01:42:15 by pguilher         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void ft_ft(int *nbr);

void ft_ft(int *nbr)
{
	*nbr = 42;

	write(1, &nbr, 1);
}

int            main(void)
{
    int *p;
    int a;

    p = &a;
    ft_ft(p);
    printf("quarenta e dois: %d\n", *p);
    printf("quarenta e dois: %i\n", a);
}

void ft_ultimate_ft(int *********nbr);