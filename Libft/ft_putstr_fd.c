/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: namhkim <namhkim@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/02 16:34:19 by namhkim           #+#    #+#             */
/*   Updated: 2021/03/02 16:34:19 by namhkim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_pustr_fd(char *s, int fd)
{
	if (s == 0 || fd < 0)
		return ;
	write(fd, s, ft_strlen(s));
}