/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mobouzha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/04 19:21:34 by mobouzha          #+#    #+#             */
/*   Updated: 2026/08/05 16:09:58 by mobouzha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include <stdlib.h>

int	ft_strlen(char *str)
{
	int	l;

	l = 0;
	while (str[l])
	{
		l++;
	}
	return (l);
}

char	*ft_strcat(char *dest, char *src)
{
	int	i;
	int	j;

	i = 0;
	while (dest[i])
	{
		i++;
	}
	j = 0;
	while (src[j])
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	return (dest);
}

int	total_len(int size, char **strs)
{
	int	total_len;
	int	i;

	total_len = 0;
	i = 0;
	while (i < size)
	{
		total_len += ft_strlen(strs[i]);
		i++;
	}
	return (total_len);
}



char	*ft_strjoin(int size, char **strs, char *sep)
{
	char	*arr;
	int		len_strs;
	int		i;

	len_strs = total_len(size, strs);
	if (size > 1)
		len_strs = ft_strlen(sep) * (size - 1);
	arr = malloc((len_strs + 1));
	if (arr == NULL)
		return (NULL);
	arr[0] = '\0';
	i = 0;
	while (i < size)
	{
		ft_strcat(arr, strs[i]);
		if (i < size - 1)
			ft_strcat(arr, sep);
		i++;
	}
	return (arr);
}
int     main()
{
        char    *strs[3] =  {"42", "1337", "med"};
        char    *sep = " ,";
        char    *arr;

        arr = ft_strjoin(3, strs, sep);
        printf("%s", arr);
        free(arr);
        arr = NULL;
}

