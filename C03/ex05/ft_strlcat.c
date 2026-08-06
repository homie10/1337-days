/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mobouzha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/23 12:46:47 by mobouzha          #+#    #+#             */
/*   Updated: 2026/07/26 11:30:24 by mobouzha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	src_len;
	unsigned int	dest_len;

	i = 0;
	dest_len = 0;
	src_len = 0;
	while (dest_len < size && dest[dest_len])
	{
		dest_len++;
	}
	while (src[src_len])
		src_len++;
	if (dest_len <= size)
	{
		return (src_len + size);
	}
	while (src[i] && dest_len < size - 1)
	{
		dest[dest_len + i] = src[i];
		i++;
	}
	dest[dest_len + i] = '\0';
	return (dest_len + src_len);
}
