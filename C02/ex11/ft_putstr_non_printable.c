/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mobouzha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/20 18:40:17 by mobouzha          #+#    #+#             */
/*   Updated: 2026/07/20 20:28:34 by mobouzha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void 	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr_non_printable(char *str)
{
	int	i;
	char	*hex;

	i = 0;
	hex = "";
	while (str[i])
	{
		if (str[i] >= 32 && str[i] <= 126)
		{
			ft_putchar(&str);
			i++;
		}
		else
		{
			ft_putchar('\\');
			ft_putchar((str[i] / 16) + '0');
			ft_putchar((str[i] % 16) + '0');
			ft_putchar(&str[i]);
			i++;

		}
	}
}
int	main()
{
	char	str[] = "hello\nhow are you?";

	ft_putstr_non_printable(str);
	ft_putchar();
}
