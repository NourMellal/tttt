/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmellal <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/14 01:17:51 by nmellal           #+#    #+#             */
/*   Updated: 2023/10/14 16:53:03 by nmellal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char		*tmp;
	const unsigned char	*tmp2;

	tmp = (unsigned char *)dest;
	tmp2 = (const unsigned char *)src;
	if (dest < src)
		return (ft_memcpy(dest, src, n));
	while (n--)
		tmp[n] = tmp2[n];
	return (dest);
}

// int	main(void)
// {
// 	char arr[30] = "ABCDEFGHIJK";
// 	ft_memmove(&arr[0], &arr[3], 3 * sizeof(char));
// 	printf("%s\n", arr);
// 	return (0);
// }
