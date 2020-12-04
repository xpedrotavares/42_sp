/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pguilher <pguilher@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/03 02:57:11 by pguilher          #+#    #+#             */
/*   Updated: 2020/12/04 01:54:59 by pguilher         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
char *ft_strcpy(char *dest, char *src);

char *ft_strcpy(char *dest, char *src)
{
	int i;

	i = 0;
	
	while (src[i] != '\0')
	{
		dest[i] = src[i]; // = atribuição simples
		i++;
	}
	dest[i] = '\0'; // precisa retornar um int
	return (dest);
}

int main()
{
	    char str1[]= "Testa essa caralha agora!";
      char str2[5];
      char str3[20];

      ft_strcpy ( str2, str1);
    printf("str2 %s \n", str2);
      ft_strcpy ( str3, str2 );
    printf("str3 %s \n", str3);
}