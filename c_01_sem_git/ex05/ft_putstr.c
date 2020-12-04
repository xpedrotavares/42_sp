/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pguilher <pguilher@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/02 21:03:30 by pguilher          #+#    #+#             */
/*   Updated: 2020/12/03 02:19:14 by pguilher         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void ft_putstr(char *str);

void ft_putstr(char *str)
{


	
	
	int i = 0; // 0 antes de iniciar o codigo como na linha 25 str[i];
	while ((str[i]) != '\0')
	{
		write(1, &str[i], 1);
		i++;
	}
	\0 toda string termina com 0 dting ja é um endereço de memoria
	// char my_string;
	// my_string = 'p', 'a', 'm';
	// *str = my_string[0];
	// write(1, &str, 1);
	
}

int main()
{
	char my_string[18] = "Puta que pariUuU!\0";
	ft_putstr(my_string);
}