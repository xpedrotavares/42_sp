/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pguilher <pguilher@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/02 20:42:57 by pguilher          #+#    #+#             */
/*   Updated: 2020/12/03 01:10:26 by pguilher         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void ft_ultimate_div_mod(int *a, int *b);

void ft_ultimate_div_mod(int *a, int *b)
{
	int temporario; //trocar nomes das var para var em ing
	
	temporario = *a;
	
	*a = *a / *b;
	*b = temporario % *b;
}

int main()
{

	int div_numb;
	int mod_numb;
	div_numb = 10;
	mod_numb = 2; 
	ft_ultimate_div_mod(&div_numb, &mod_numb);
	printf("div result %d\n mod result %d\n", div_numb, mod_numb);
}

acessar * 
para mudar * antes 
__[1]