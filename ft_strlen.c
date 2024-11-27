/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hpolishc <hpolishc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/26 15:12:58 by hpolishc          #+#    #+#             */
/*   Updated: 2024/11/27 14:30:10 by hpolishc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlen(const char *str)
{
	size_t	n;

	n = 0;
	while (str[n] != '\0')
		n++;
	return (n);
}

/*#include <string.h>

int	main(void)
{
	char	*test_string;

	test_string = "Up2You!";
	printf("Recomposed function:\n");
	printf("The length is %zu\n", ft_strlen(test_string));
	printf("Original function:\n");
	printf("The length is %zu\n", strlen(test_string));
	return (0);
}
*/