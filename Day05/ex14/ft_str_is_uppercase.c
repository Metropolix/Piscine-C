/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dvalenti <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/13 11:24:07 by dvalenti          #+#    #+#             */
/*   Updated: 2017/07/13 14:07:48 by dvalenti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int			ft_str_is_uppercase(char *str)
{
	int i;
	int res;

	res = 1;
	i = 0;
	while (str[i] != '\0')
	{
		if (!(str[i] >= 'A' && str[i] <= 'Z'))
			res = 0;
		i++;
	}
	return (res);
}
