/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hpolishc <hpolishc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/26 16:46:20 by hpolishc          #+#    #+#             */
/*   Updated: 2024/11/28 22:30:15 by hpolishc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H


# include <stdio.h>
//# include <stdlib.h>
//# include <unistd.h>

# define LIBFT_H

int	ft_isalnum(int c);
int	ft_isalpha(int c);
int	ft_isascii(int c);
int	ft_isdigit(int c);
int	ft_isprint(int c);
int	ft_tolower(int c);
int	ft_toupper(int c);
size_t	ft_strlcpy(char *dst, const char *src, size_t size);
size_t	ft_strlen(const char *str);
void *ft_memset(void *s, int c, size_t n);

#endif
