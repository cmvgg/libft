/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cvarela- <cvarela-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/21 12:25:44 by cvarela-          #+#    #+#             */
/*   Updated: 2023/10/21 21:10:13 by cvarela-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*substr;

	if (s[0] == '\0' || start > ft_strlen(s) || len == 0)
		return (ft_strdup(""));
	if (ft_strlen((char *)s) - start < len)
		len = ft_strlen((char *)s) - start;
	substr = (char *)malloc(sizeof(char) * (len + 1));
	if (!substr)
		return (0);
	ft_memcpy(substr, s + start, len);
	substr[len] = '\0';
	return (substr);
}
/*
#include <stdio.h>
int main() {
    char *source = NULL;
    char *destination = "ft_substr(source, 10, 7)";

    if (destination != NULL) {
        printf("Subcadena: %s\n", destination);
        free(destination);
    }
	else{
		printf("error");
	}

    return 0;
}*/