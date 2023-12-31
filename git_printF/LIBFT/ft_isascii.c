/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vmyshko <vmyshko@student.codam.nl>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/03 12:13:07 by vmyshko           #+#    #+#             */
/*   Updated: 2023/10/04 18:34:58 by vmyshko          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
// #include "stdio.h"

int	ft_isascii(int c)
{
	return (c >= 0 && c <= 127);
}

// int main()
// {
//     printf("%d", ft_isascii(-2));
// }
