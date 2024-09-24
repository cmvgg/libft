/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cvarela- <cvarela-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/21 12:23:27 by cvarela-          #+#    #+#             */
/*   Updated: 2024/09/21 20:38:41 by cvarela-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isdigit(int c)
{
	if (c < '0' || c > '9')
	{	
		return (0);
	}
	return (1);
}


int main() {
  char c = '2';
  int is_digit_ft;
  int is_digit_std;

  is_digit_ft = ft_isdigit(c);
  is_digit_std = isdigit(c);

  if (is_digit_ft != 0) {
    printf("El carácter '%c' es alfabético (ft_isdigit). %i\n", c, is_digit_ft);
  } else {
    printf("El carácter '%c' no es alfabético (ft_isdigit). %i\n", c, is_digit_ft);
  }

  if (is_digit_std) {
    printf("El carácter '%c' es alfabético (isdigit). %i\n", c, is_digit_std);
  } else {
    printf("El carácter '%c' no es alfabético (isdigit). %i\n", c, is_digit_std);
  }

  return 0;
}
