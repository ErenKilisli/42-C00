/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ikilisli <ikilisli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/21 13:23:52 by ikilisli          #+#    #+#             */
/*   Updated: 2024/08/21 15:04:22 by ikilisli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_add_numbers(char *str)
{
	char		num;
	int			i;

	i = 0;
	num = '0';
	while (num <= '9')
	{
		str[i] = num;
		num++;
		i++;
	}
	str[i] = '\0';
}

void	print_numbers(char *str, int i, int j, int k)

{
	write(1, &str[i], 1);
	write(1, &str[j], 1);
	write(1, &str[k], 1);
	if (str[i] != '7' || str[j] != '8' || str[k] != '9')
		write(1, ", ", 2);
}

void	ft_print_comb(void)
{
	char	str[11];
	int		i;
	int		j;
	int		k;

	ft_add_numbers(str);
	i = 0;
	while (str[i] != '\0')
	{
		j = i + 1;
		while (str[j] != '\0')
		{
			k = j + 1;
			while (str[k] != '\0')
			{
				print_numbers(str, i, j, k);
				k++;
			}
			j++;
		}
		i++;
	}
}
