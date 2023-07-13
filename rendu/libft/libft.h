/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rahmed <rahmed@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/06 15:51:31 by rahmed            #+#    #+#             */
/*   Updated: 2021/11/14 16:58:23 by rahmed           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H
# include <unistd.h>

void	ft_putchar_nbchr(char c, int *nbchr);
void	ft_putnbr_hex_nbchr(unsigned long nbr, int capitalize, int *nbchr);
void	ft_putnbr_nbchr(long nbr, int *nbchr);
void	ft_putstr_nbchr(char *s, int *nbchr);

#endif
