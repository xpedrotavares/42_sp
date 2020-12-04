/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pguilher <pguilher@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/02 22:44:30 by pguilher          #+#    #+#             */
/*   Updated: 2020/12/02 22:57:22 by pguilher         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int ft_strlen(char *str);

int ft_strlen(char *str)
{
	int i = 0;
	
	while ((str[i]) != "\0")
	{
		int stored = i;
		if(str[i] == "\0" )
		{
			write(1, stored, 1);
		}
	}
}

int main()
{
	char my_string[25] = "Jesus humilha satanas!\n0";
 	ft_strlen(my_string);
}