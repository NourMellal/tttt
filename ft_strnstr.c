/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmellal <nmellal@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/15 19:03:03 by nmellal           #+#    #+#             */
/*   Updated: 2023/11/06 22:06:12 by nmellal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t n)
{
	size_t	i;
	size_t	j;

	if (!needle)
		return ((char *)haystack);
	if (!haystack)
		return (NULL);
	if (*needle == '\0')
		return ((char *)haystack);
	i = 0;
	while (haystack[i] && i < n)
	{
		j = 0;
		while (haystack[i + j] && haystack[i + j] == needle[j] && i + j < n)
		{
			if (needle[j + 1] == '\0')
				return ((char *)haystack + i);
			j++;
		}
		i++;
	}
	return (0);
}

// int	main(void)
// {
// 	#include <stdio.h>
// 	#include <string.h>

// 	char *tmp = ft_strnstr("Hhh", NULL, 50);
// 	if (!tmp)
// 		printf("mal9it walo\n");
// 	else
// 	{
// 		printf("%s\n", tmp);
// 	}
// 	return (0);
// }
