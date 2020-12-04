/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pguilher <pguilher@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/04 01:56:59 by pguilher          #+#    #+#             */
/*   Updated: 2020/12/04 02:12:36 by pguilher         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char *ft_strncpy(char *dest, char *src, unsigned int n);

char *ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int i; // An unsigned variable type of int can hold zero and positive numbers
	
	i = 0;
	while (src[i] != '\0' && i < n)
	{
		dest[i] = src[i];
		i++;
	}
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	
	return (dest);
}

#include <string.h> 

int main(void) 
{ 
	char str1[]= "Pedro Guilherme";
	char str2[10]; 
	ft_strncpy( str2, str1, 2); 
	printf("str2 %s \n", str2); 
}