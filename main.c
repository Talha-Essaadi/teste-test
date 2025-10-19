/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tessaadi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/16 22:53:32 by tessaadi          #+#    #+#             */
/*   Updated: 2025/10/16 22:58:34 by tessaadi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int main() 
{
	int	*ptr;

	ptr = malloc(0);
	if (ptr == NULL)
	{
		printf("int NULL \n");
	}
	printf("its not NULL\n");
	free(ptr);
}

