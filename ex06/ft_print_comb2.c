/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ikilisli <ikilisli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/21 15:09:43 by ikilisli          #+#    #+#             */
/*   Updated: 2024/08/21 16:13:05 by ikilisli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	print_string(char *str)

{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		write(1, &str[i], 1);
		i++;
	}
}

void	str_init(char *str)

{
	str[0] = '0';
	str[1] = '0';
	str[2] = ' ';
	str[3] = '0';
	str[4] = '0';
	str[5] = '\0';
}

void	ft_print_comb2(void)
{
	char	str[6];
	int		i;
	int		j;

	i = 0;
	while (i <= 98)
	{
		j = i + 1;
		while (j <= 99)
		{
			str[0] = (i / 10) + '0';
			str[1] = (i % 10) + '0';
			str[2] = ' ';
			str[3] = (j / 10) + '0';
			str[4] = (j % 10) + '0';
			print_string(str);
			if (i != 98 || j != 99)
				write(1, ", ", 2);
			j++;
		}
		i++;
	}
}
